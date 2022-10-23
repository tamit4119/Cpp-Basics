#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int l, int m, int r);
void mergesort(int a[],int l,int r)
{
    int m=(l+r)/2;
    if(l<r)
    {
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
}
void merge(int a[],int l, int m, int r)
{
    int *s,*t,n1,n2,i,j,k;
    s=new int[20];
    t=new int[20];
    n1=m-l+1;
    n2=r-m;
    for(i=0;i<n1;i++)
    {
        s[i]=a[l+i];
    }

for(j=0;j<n2;j++)
    {
        t[j]=a[m+j+1];
    }

//sentinals

    s[i]=INT_MAX; 
    t[j]=INT_MAX;

    i=0,j=0;
    for(k=l;k<r+1;k++)
    {
        if(s[i]<=t[j])
        {
            a[k]=s[i];
            i+=1;
        }
        else
        {
            a[k]=t[j];
            j+=1;
        }
    }
}

int main()
{
    int *num,n;
    int i;

    cout<<"Enter number of digits:";
    cin>>n;
    num = new int[20];
    cout<<"Enter numbers:";
    for(i=0 ; i<n; i++){
        cin>>num[i];
    }
    mergesort(num,0,n-1);
    cout<<"Sorted array:\n";
    for(i=0; i<n; i++)
        cout<<num[i]<<'\t';
    free(num);
    return 0;
}
