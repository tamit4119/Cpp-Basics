/*      *****
         ****
          ***
           **
            *     */

#include<iostream>
using namespace std;

int main(){
	int n=5,i,k,j;
	
	for(i=n;i>=1;i--){  //outer loop
		
		for(k=n-1;k>=i;k--){
			cout<<" ";     //spacing
		}
			
		for(j=i;j>=1;j--){  //inner loop
			cout<<"*";
		}
		cout<<endl;
		
		
	
		
	}
	return 0;
}
