#include<iostream>
using namespace std;
class node{
    public:int data;
    node *next;
};
int main(){
    node *head = nullptr;

    node *n1 = new node();
    n1->data = 1;
    n1->next =head;
    head = n1;
    node *n2 = new node();
    n2->data = 2;
    n2->next =head;
    head = n2;
    node *n3 = new node();
    n3->data = 1;
    n3->next =head;
    head = n3;
    node *n4 = new node();
    n4->data = 4;
    n4->next =head;
    head = n4;
    node *n5 = new node();
    n5->data = 1;
    n5->next =head;
    head = n5;

    int val;
    cout<<"enter the value :"<<endl;
    cin>>val;

    node *temp =head ;
    node *prev =nullptr;

    while(temp!= nullptr){
        if(temp->data == val){
            prev = temp->next;
            head = temp->next;
        }else{
            temp =temp->next;
        }
    }

    while (head!=nullptr)
    {
        cout<<head->data<<endl;
        head=head->next;
        /* code */
    }
    
    
}