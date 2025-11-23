#include<iostream>
using namespace std;
class node{
    public:int val;
    node* next;
};
node* input(node* head,int n){
    int i =0;
    int data;
    while(i<n){
        i++;
        cout<<"enter the data : "<<endl;
        cin>>data;
        node* nn = new node();
        nn->val = data;
        nn->next = head;
        head = nn;
    }
    return head;
}


node* insertion(node* head){
    node* slow = head;
    node* fast = head;
    while(fast!=nullptr && fast->next!=nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    int input;
    cout<<"enter the val of new node :"<<endl;
    cin>>input;
    node* newNode = new node();
    newNode->val = input;
    newNode->next = slow->next;
    slow->next = newNode;

    return head;
}

void display(node* head){
    while(head!=nullptr){
        cout<<head->val<<"  ";
        head = head->next;
    }
}

int main(){
    node* head = nullptr;
    int n = 5;
    head= input(head,5);

    head = insertion(head);
    display(head);
}