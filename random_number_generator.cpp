#include<iostream>
#include<ctime>
using namespace std; 

//Outputs 10 random numbers between 0 and 100
int main(){
    srand(time(0));
    for(int i = 0; i < 10; i++){
        cout << rand()%101 << endl; 
    }
    return 0; 
}