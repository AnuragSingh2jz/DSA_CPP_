#include<bits/stdc++.h>
using namespace std;
class node{
    public:int val;
    node* next;
};
node* merge(node* leftHead,node* rightHead){
    node* dummyNode = new node();
    node* temp = dummyNode;

    node* t1 = leftHead;
    node* t2 = rightHead;

    while(t1!=nullptr && t2!=nullptr){
        if(t1->val<t2->val) {
            temp->next = t1;
            temp = t1;
            t1=t1->next;
        }else{
            temp->next = t2;
            temp = t2;
            t2=t2->next;
        }
    }
    if(t1) temp->next = t1;
    else temp->next = t2;

    return dummyNode->next;

}

node* findMiddle(node* head){
    node* slow = head;
    node* fast = head;
    while(fast->next!=nullptr && fast->next->next!=nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

node* sort(node* head){
    if (head == nullptr || head->next == nullptr) return head;

    node* middle = findMiddle(head); // find middle with the help of flaud's algo
    node* leftHead = head;
    node* rightHead = middle->next;
    middle->next = nullptr;

    leftHead = sort(leftHead);
    rightHead = sort(rightHead);

    return merge(leftHead,rightHead);

}





int main(){
    node* head = nullptr;

    node* n1 = new node();
    n1->val = 1;
    n1->next = head;
    head = n1;

    node* n2 = new node();
    n2->val = 5;
    n2->next = head;
    head = n2;

    node* n3 = new node();
    n3->val = 3;
    n3->next = head;
    head = n3;

    node* n4 = new node();
    n4->val = 31;
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

    head = sort(head);
    while(head!=nullptr){
        cout<<head->val<<endl;
        head = head->next;
    }


}