#include<iostream>
using namespace std;
class node{
    public: int val;
    node *next;
};
int main(){
    node * head1=nullptr;
    node *n1  =  new node ();
    n1->val = 1;
    n1->next =head1;
    head1 = n1;

    node *n2  =  new node ();
    n2->val = 2;
    n2->next =head1;
    head1 = n2;

    node *n3  =  new node ();
    n3->val = 3;
    n3->next =head1;
    head1 = n3;

    node * head2 = nullptr;

    node *nn1 = new node();
    nn1->val =11;
    nn1->next = head2;
    head2 = nn1;

    node *nn2 = new node();
    nn2->val =12;
    nn2->next = head2;
    head2 = nn2;

    node *nn3 = new node();
    nn3->val =13;
    nn3->next = head2;
    head2 = nn3;


    node *dubNode = new node();
    node *temp = dubNode;
    node *t1 = head1;
    node *t2 = head2;

    while(t1!=nullptr && t2!=nullptr){
        if(t1->val <t2->val){
            temp->next = t1;
            temp = t1;
            t1 = t1->next;
        }else{
            temp->next = t2;
            temp = t2;
            t2 = t2->next;
        }
        if(t1) temp->next=t1;
        else temp->next=t2;
    }
    dubNode=dubNode->next; // initially its 0 or nothing
    while(dubNode!=nullptr){
        cout<<dubNode->val<<endl;
        dubNode= dubNode->next;
    }

}