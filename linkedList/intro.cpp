#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int val){
        data=val;
        next=NULL;
    };
};
int main(){
    node *n1;
    n1=new node(10);  //obj created in heap

    cout<<n1<<endl;   //head <pointer> pointing to a node 

    cout<<n1->data<<endl;  // node's data 

    cout<<n1->next;   // node's pointer containg null

    return 0;
}