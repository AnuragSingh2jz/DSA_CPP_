// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
// };
// int main(){
//     node* head = nullptr;
//     node* n1 = new node();
    
//     n1->data = 10;
//     n1->next = head;
//     head = n1;

//     node * n2 = new node();
//     n2->data = 20;
//     n2->next = head;
//     head = n2;

//     node * n3 = new node();
//     n3->data = 30;
//     n3->next = head;
//     head = n3;

//     node *temp = head;
//     node *p=nullptr;
//     node* q=nullptr;
//     node *r = head;

//     // while (r!=nullptr){
//     //     p=q;
//     //     q=r;
//     //     r=r->next;
//     //     q->next=p;
//     // }

//     // while (q!=nullptr){
//     //     cout<<q->data<<"\t";
//     //     q=q->next;
//     // }
    
    
//     // node *prev = nullptr;

//     // int val;

//     // cout<<"enter the value at which you want to delete:"<<endl;
//     // cin>>val;


//     // while(temp->data!=val){

//     //     prev = temp;
//     //     temp = temp->next;

//     // }


    

//     return 0;
// }
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
//     node* prev;
// };

// int main(){
//     node* head = nullptr;
//     node *prev = nullptr;
    
//     node *n1 = new node();
//     n1->data = 10;
//     n1->next = head;
//     head = n1;
//     n1->prev = nullptr;


//     node *n2 = new node();
//     n2->data = 20;
//     n2->next = head;
//     head = n2;
//     n2->prev = nullptr;
//     n1->prev = n2;

//     node *n3 = new node();
//     n3->data =30;
//     n3->next = head;
//     head = n3;
//     n3->prev = nullptr;
//     n2->prev = n3;

//     while(head->next!=nullptr){
//         cout<<head->data<<"\t";
//         head=head->next;
//     }
//     cout<<endl;
//      while(head!=nullptr){
//         cout<<head->data<<"\t";
//         head=head->prev;
//     }
  
//    return 0;
    
// }


// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
// };
// int main(){
//     node* head = nullptr;

//     node* n1 = new node();
//     n1->data = 10;
//     n1->next = nullptr;
//     head = n1;

//     node* n2 = new node();
//     n2->data = 20;
//     n2->next = nullptr;
//     n1->next = n2;

//     node* n3 = new node();
//     n3->data = 30;
//     n3->next = nullptr;
//     n2->next = n3;

//     node* n4 = new node();
//     n4->data = 40;
//     n4->next = n2;
//     n3->next = n4;

//     node *slow = head;
//     node *fast = head;

//     while(slow!=nullptr && fast != nullptr && fast->next!=nullptr){
//         slow = slow->next;
//         fast = fast->next->next;
//         if(slow == fast) {
//             cout<<"LL is looped :)"<<endl;
//             return 0;
//         }

//     }
//     cout<<"LL is not looped"<<endl;


//     return 0;
// }

// #include<iostream>
// #include<utility>
// using namespace std;
// int main(){
//     int a[5] = {5,1,2,4,3};
//     // for(int i = 1;i<=4;i++){
//     //     int temp = a[i];
//     //     int j = i-1;
//     //     while(a[j]>=temp && j>=0){
//     //         a[j+1]=a[j];
//     //         j--;
//     //     }
//     //     a[j+1]=temp;
//     // }
//     // for(int i =0;i<=4;i++){
//     //     int min = i;
//     //     for(int j=i+1;j<=4;j++){
//     //         if(a[j]<=a[min]){
//     //             min = j;
//     //         }
//     //     }
//     //     swap(a[i],a[min]);
//     // }

// }
