#include <bits\stdc++.h>
using namespace std;

#define WHITE 1 //unvisited node
#define GRAY 2  //current node
#define BLACK 3 //visited node

int adj[100][100]; // For store neighbor
int color[100];    // Store defined color code

int node, edge; //Global variable

void dfs_visit(int x)
{
    color[x] = GRAY;
    for (int i = 1; i <= node; i++)
    {
        if (adj[x][i] == 1)
        {
            if (color[i] == WHITE)
            {
                dfs_visit(i);
            }
        }
    }
    color[x] = BLACK;
    cout << "Visited node: " << x << endl;
}
void dfs()
{
    for (int i = 1; i <= node; ++i)
    {
        color[i] = WHITE;
    }
    for (int i = 1; i <= node; ++i)
    {
        if (color[i] == WHITE)
        {
            dfs_visit(i);
        }
    }
}
int main()
{
    cout << "Enter Number of node and edge: ";
    scanf("%d %d", &node, &edge);

    int n1, n2;

    for (int i = 1; i <= edge; i++) //checking neighbor
    {
        scanf("%d %d", &n1, &n2);
        adj[n1][n2] = 1;
        adj[n2][n1] = 1;
    }

    /*for (int i = 1; i <= edge; i++)  //adjacent table
    {
        for (int j = 1; j <= node; j++)
        {
            printf("%d  ", adj[i][j]);
        }
        printf("\n");
    }*/

    dfs(); //call dfs function

    return 0;
}
/*
input:
5 6
1 2
3 1
3 2
2 4
4 5
2 5
*/