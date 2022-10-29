//check for even and odd number
#include <iostream>

using namespace std;

int main() 
{
    int a;
    
    cout<<"Enter Number: ";
    cin>>a;
    
    if(a%2 == 0){  // if remainder is zero then even number
        cout<<"Even";
    }
    else{       
        cout<<"Odd";
    }
    
    return 0;
}
