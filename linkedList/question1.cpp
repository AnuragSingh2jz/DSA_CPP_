#include<iostream>
using namespace std;
class node{
    public:int data;
    node *next;
};
int main(){
    node *head=nullptr;

    node *n1=new node();
    n1->data=10;
    n1->next=head;
    head=n1;
   
    node *temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }

    node *n2=new node();
    n2->data=20;
    n2->next=temp->next;
    temp->next=n2;

    node *n3=new node();
    n3->data=30;
    n3->next=head;
    head=n3;
    
    //delete the 1st node 
    
    head=head->next;

    while(head!=nullptr){
        cout<<head->data<<"\t";
        head=head->next;
    }
    
    temp=NULL;
    delete n3;


    return 0;
}