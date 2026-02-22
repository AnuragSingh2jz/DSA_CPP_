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
    n3->data=99;
    n3->next=head;
    head = n3;
    int x=-32768;

    while(head!=nullptr){
        if(head->data>x){
            x=head->data;
            head=head->next;
        }
        else break;
    }
    if(head==nullptr) cout<<"the ll is sorted "<<endl;
    else cout<<"the ll is not sorted "<<endl;
    return 0;
    


}