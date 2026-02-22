#include<bits/stdc++.h>
using namespace std;
class node{
    public:int val;
    node* next;
};
node* swap(node* &temp){
    node* p = temp;
    node* q = nullptr;
    node* r = nullptr;
    while(p!=nullptr){
        r = q;
        q=p;
        p = p->next;
        q->next = r;
    }
    return q;
}

int main(){
    node* head  = nullptr;
        
   

    node* n2 = new node();
    n2->val = 5;
    n2->next = head;
    head = n2;

    node* n3 = new node();
    n3->val = 4;
    n3->next = head;
    head = n3;

    node* n4 = new node();
    n4->val = 3;
    n4->next = head;
    head = n4;

    node* n5 = new node();
    n5->val = 2;
    n5->next = head;
    head = n5;

    node* n6 = new node();
    n6->val = 1;
    n6->next = head;
    head = n6;

    node *nextnode= nullptr ;
    node *prev= nullptr;
    node *temp = head;
    while(temp !=nullptr && temp->next!=nullptr){
        node *second = temp->next;
        
        nextnode = second->next;
        second->next = nullptr;

        node* newnode = swap(temp);
        if(temp == head){
            head = newnode;
        }else prev->next = newnode;

        prev = temp;
        temp = nextnode; 
    }
     if (temp != nullptr) {
        prev->next = temp; // Link the last unpaired node to the list
    }
    
    while(head!=nullptr){
        cout<<head->val<<endl;
        head = head->next;
    }

}