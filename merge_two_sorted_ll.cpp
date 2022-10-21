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
node * merge(node *head1, node* head2){
    if(head1==NULL) return head2;
    if(head2==NULL) return head1;
       node *n=NULL;
       node *head=NULL;
    while(head1!=NULL && head2!=NULL){
        if(head1->data<head2->data){
            if(head==NULL){
                head=head1;
                n=head1;
            }
            else{
                n->next=head1;
                n=head1;
            }
             head1=head1->next;

        }

        else{
            if(head==NULL){
                head=head2;
                n=head2;
            }
            else{
                n->next=head2;
                n=head2;
            }
              head2=head2->next;
        }
    }
    if(head1==NULL){
        n->next=head2;
    }
    else{
        n->next=head1;
    }
return head;
}
int main(){
    cout<<"Insert LL1: "<<endl;
    node *head1=getinput();
    cout<<"Insert LL2: "<<endl;
    node *head2=getinput();
    node *head=merge( head1, head2);
    print(head);
    return 0;

    
}