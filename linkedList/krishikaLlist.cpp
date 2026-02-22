#include <iostream>
using namespace std;
class node{
public:
int data;
node *next;
};
int main() {
    node *head=nullptr;
    node *n1=new node();
    n1->data=10;
    n1->next=head;
    head=n1;
    node *n2=new node();
    n2->data=20;
    n2->next=head;
    head=n2;
    node *n3=new node();
    n3->data=30;
    n3->next=head;
    head=n3;
    int val;
    cout<<"Enter the data after which you want to delete a  node: ";
    cin>>val;
    node *temp=head;
    node *temp2;
    while(temp->data!=val)
    {
        temp=temp->next;
    }
        temp2=temp->next;
        temp->next=temp2->next;
        delete temp2;
    cout<<"Linked List is: ";
    while(head!=nullptr)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    return 0;
} 