#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int val;
    node* next;
};




int main(){
    node* head = nullptr;

    node* n1 = new node();
    n1->val = 1;
    n1->next = head;
    head = n1;

    node* n2 = new node();
    n2->val = 2;
    n2->next = head;
    head = n2;

    node* n3 = new node();
    n3->val = 3;
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

    node* slow = head;
    node* fast = head;

    while(fast->next->next!=nullptr && fast->next !=nullptr ){
        slow = slow->next;
        fast = fast->next->next;
    }
  

    node *p = slow->next;
    node* q = nullptr;
    node* r = nullptr;

    while(p!= nullptr){
        r=q;
        q=p;
        p=p->next;
        q->next = r;
    }

    // node* head2 = slow->next;
    while(q!=nullptr){
        if(q->val != head->val) {
            cout<<"not a palindrome "<<endl;
            return 0;
        }
        else {
            head=head->next;
            q=q->next;
        }
    }
    cout<<"is a palindrom";




    return 0;

}
   


