#include<iostream>
using namespace std;
class node{
    public:int data;
    node *next;
};

int max(node *&head){
    int max=-32768;
    while(head!=nullptr){
        if(head->data>max) max =head->data;
        else head=head->next;
    }
    return max;

}

int main(){
    node *head= nullptr;

    node *n1=new node();
    n1->data=10;
    n1->next=head;
    head=n1;

    node*n2=new node();
    n2->data=51;
    n2->next=head;
    head=n2;

    node *n3=new node();
    n3->data=2;
    n3->next=head;
    head = n3;

    


    cout<<"max - "<<max(head)<<endl;
    


   
    
    return 0;
}