#include<iostream>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;
};

int main(){
    ListNode* head = nullptr;
    ListNode* n1 = new ListNode();
    n1->val = 5;
    n1->next = head;
    head = n1;

    ListNode* n2 = new ListNode();
    n2->val = 4;
    n2->next = head;
    head = n2;

    ListNode* n3 = new ListNode();
    n3->val = 3;
    n3->next = head;
    head = n3;

    ListNode* n4 = new ListNode();
    n4->val = 2;
    n4->next = head;
    head = n4;

    ListNode* n5 = new ListNode();
    n5->val = 1;
    n5->next = head;
    head = n5;

    ListNode* temp = head;

    int c = 0;
    while(temp!=nullptr){
        c++;
        temp=temp->next;
    }

    int k = 2;
    c = c-k;
    temp =head;
    int i =1;
    while(i!=c){
        temp = temp->next;
        i++;
    }
    ListNode* temp2 = temp->next; 
    ListNode* temp3 = temp->next; 
    temp->next = nullptr;
    while(temp2->next!=nullptr){
        temp2=temp2->next;
    }
    temp2->next = head;

    while(temp3!=nullptr){
        cout<<temp3->val<<endl;
        temp3 = temp3->next;
    }

    

    return 0;
}