#include<iostream>
using namespace std;
class node{
    public:int data;
    node *next;
};
int main(){
    node *head=nullptr;
    
    node *n1=new node();
    n1->data=2;
    n1->next=head;
    head =n1;
    
    node* n2=new node();
    n2->data=5;
    n2->next=n1->next;
    n1->next=n2;

    node *n3=new node();
    n3->data=10;
    n3->next=n2->next;
    n2->next=n3;

    
    while(head!=nullptr){
        cout<<head->data<<" - ("<<head->next<<")--> ";
        head=head->next;
    }
    

    return 0;
}