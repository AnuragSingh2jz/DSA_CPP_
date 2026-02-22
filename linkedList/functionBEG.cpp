#include<iostream>
using namespace std;
class node{
    public:int val;
    node *next;
};
node* insert(node* &head,int newdata){
    node *nn=new node();
    nn->val=newdata;
    nn->next=head;
    head=nn;
    return head;
}
void print(node *&head){
    while(head!=nullptr){
        cout<<head->val<<"\t";
        head=head->next;
    } 
}
int main(){
    node *head= nullptr;

    insert(head,23);
    insert(head,43);
    insert(head,73);
    insert(head,13);
    insert(head,2);

    print(head);

    
    // cout<<"to stop inserting node press -1 "<<endl;
    // int value;
    // while(value!=-1){
    //     cout<<"enter the data : "<<endl;
    //     cin>>value;
    //     insert(head,value);
    // }

    // print(head->next);
    return 0;
}