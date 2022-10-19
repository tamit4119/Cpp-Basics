#include <iostream>
#include <string>

using namespace std;
//function declaration
bool checking(string phrase);

int main()
{
   string phrase;
   int lung,ris;
   cout<<" enter the phrase: ";
   getline(cin,phrase);
   //function call
   ris=checking(phrase);
   
   if(ris==0){
       cout<<"there are no capital letters"<<endl;
   }else{
       cout<<"there are capital letters"<<endl;
   }
   return 0;

}

bool checking(string phrase)
{
   bool check=false;
   //for to check letter by letter
   for(int i=0; i<phrase.size();i++)
   {
       if(phrase[i]>='A'&&phrase[i]<='Z')
       {
           check=true;
       }
   }

   return check;
}
