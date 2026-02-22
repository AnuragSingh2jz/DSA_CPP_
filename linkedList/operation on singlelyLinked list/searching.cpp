#include<iostream>
using namespace std;
class node{
    public:int data;
    node *next;
};

int main(){
    node *head= nullptr;

    node *n1=new node();
    n1->data=10;
    n1->next=head;
    head=n1;

    node*n2=new node();
    n2->data=5;
    n2->next=head;
    head=n2;

    node *n3=new node();
    n3->data=2;
    n3->next=head;
    head = n3;
    
    node *temp=head;
    while(head!=nullptr){
        cout<<head->data<<"\t";
        head=head->next;
    }

    cout<<endl;

    int val;
    cout<<"enter the val : ";
    cin>>val;
    
    
    int flag=0;

    while(temp!=nullptr){
        if(temp->data==val){
            flag=1;
            break;
        }
        else{
            temp=temp->next;
        }
    }
    if(flag==1){
        cout<<"yes the list is present "<<endl;
    }
    else cout<<"no the list is not present in the linked list"<<endl;

    
  
    
    return 0;
}