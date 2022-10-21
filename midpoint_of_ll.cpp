#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int data){
        this->data=data;
        next=NULL;
    }
};
node * getinput(){
    int data;
    cout<<"Enter: "<<endl;
    cin>>data;
    node *head=NULL;
    node *tail=NULL;
    while(data!=-1){
        node *n= new node (data);
        if(head==NULL){
            head=n;
            tail=n;
        }
        else{
            tail->next=n;
            tail=n;
        }
        cin>>data;
    }
    return (head);
}
void print(node *head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int len(node *head){
    node *temp=head;
    int count=0;
    while(temp!=NULL){
        count ++;
        temp=temp->next;
    }
    return (count);
}
node * midpoint(node *head){
    node *temp=head;
    int length=len(head);
    int i=length/2;
    for(int j=0; j<i; j++){
        temp=temp->next;
    }
    return(temp);
}
int main(){
node *head=getinput();
node *p=midpoint(head);
cout<<"MIDPOINT OF LL IS: ";
print(p);
return 0;

    return 0;
}