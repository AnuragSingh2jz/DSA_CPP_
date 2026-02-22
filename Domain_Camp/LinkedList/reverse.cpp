#include<bits/stdc++.h>
using namespace std;
class node{
    public:int val;
    node* next;
    node(int data):val(data),next(nullptr){}

};

int main(){
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);

    node* p = nullptr;
    node* q = nullptr;
    node* r = head;
    while(r!=nullptr){
        p=q;
        q=r;
        r=r->next; 
        q->next = p;
    }
        head = q;
    while(head!=nullptr){
        cout<<head->val<<" ";
        head =head->next;
    }
}