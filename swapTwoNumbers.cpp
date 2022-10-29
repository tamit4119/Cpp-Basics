//c++ prog to swap two numbers
#include <iostream>

using namespace std;

int main() 
{
    int a = 10, b = 20;
    
    cout<<a<<" "<<b<<endl;
    
    //code for swapping
    int temp = a;
    a = b;
    b = temp;
    
    cout<<"\nAfter Swapping:\n";
    cout<<a<<" "<<b<<endl;
    
    return 0;
}
