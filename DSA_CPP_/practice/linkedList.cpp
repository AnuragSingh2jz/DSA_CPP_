// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node *next;
// };
// int main(){
//     node *head=nullptr;
//     node*n1=new node();  //beginning
//     n1->data=10;
//     n1->next=head;
//     head=n1;

//     node*n2=new node(); //beginning
//     n2->data=20;
//     n2->next=head;
//     head=n2;

//     node*n3=new node();   //beginning
//     n3->data=30;
//     n3->next=head;
//     head=n3;

//     node *n4=new node();  // adding this node in the end 
//     n4->data=40;
//     n4->next=n1->next;
//     n1->next=n4;
//     node *temp1=head;

//     while(temp1!=nullptr){
//         cout<<temp1->data<<endl;
//         temp1=temp1->next;
//     }

//     int x;
//     cout<<"enter the value which you want to delete :";
//     cin>>x;
//     cout<<endl;

//     node *temp=head;
//     node *previous=nullptr;

//     while(temp->data!=x){
//         previous=temp;
//         temp=temp->next;
//     }

//     previous->next=temp->next;
    

//     while(head!=nullptr){
//         cout<<head->data<<endl;
//         head=head->next;
//     }
//     delete temp;

//     return 0;


// }

// #include<iostream>
// using namespace std;
// class node{
//     public:int data;
//     node *next;
// };

// node *input(node *&head,int value){
//     node *nn=new node();
//     nn->data=value;
//     nn->next=head;
//     head=nn;
//     return head;
// }

// void display(node *&head){
//     while(head!=nullptr){
//         cout<<head->data<<endl;
//         head=head->next;
//     }
// }
// int main(){
//     node *head=nullptr;
//     int data;
//     while(data!=-1){
//         cout<<"enter the value : ";
//         cin>>data;
//         input(head,data);


//     }
//     display(head->next);
// }
// #include<iostream>
// using namespace std;
// class node{
//     public:int data;
//     node *next;
// };
// int main(){

//     node *head=nullptr;
//     node*n1=new node();  //beginning
//     n1->data=10;
//     n1->next=head;
//     head=n1;

//     node*n2=new node(); //beginning
//     n2->data=20;
//     n2->next=head;
//     head=n2;

//     node*n3=new node();   //beginning
//     n3->data=30;
//     n3->next=head;
//     head=n3;

//     node *n4=new node();  // adding this node in the end 
//     n4->data=40;
//     n4->next=n1->next;
//     n1->next=n4;
//     node *temp=head;
//     node *temp1=head;
//     while(temp1!=nullptr){
//         cout<<temp1->data<<"\t";
//         temp1=temp1->next;
//     }
//     cout<<endl;
    
//     int x;
//     cout<<"enter the value after you want to insert : ";
//     cin>>x;
//     cout<<endl;

//     while(temp->data!=x){
//         temp=temp->next;
//     }
//     node *nn=new node();
//     nn->data=1;
//     nn->next=temp->next;
//     temp->next=nn;

//     node *n=new node();
//     n->data=2;
//     n->next=temp->next;
//     temp->next=n;

    

//     while(head!=nullptr){
//         cout<<head->data<<"\t";
//         head=head->next;
//     }
//     return 0;
// }


// #include<iostream>
// #include<utility>
// using namespace std;
// int main(){
//     int a[100],n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     for(int i=1;i<n;i++){
//         int temp=a[i];
//         int j=i-1;
//         while(j>=0&&a[j]>temp){
//             a[j+1]=a[j];
//             j--;
//         }
//         a[j+1]=temp;
//     }
//     cout<<"The sorted array is :    ";
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<"\t";
//     }
//     return 0;
// }

// #include<iostream>
// #include<utility>
// using namespace std;
// int main(){
//     int a[100],n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     for(int i=0;i<n;i++){
//         int min=i;
//         for(int j=i+1;j<n;j++){
//             if(a[min]>a[j]){
//                 min=j;
//             }
//             if(min!=i) swap(a[i],a[min]);
//         }
//     }

//     cout<<"The sorted array is :    ";
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<"\t";
//     }



// }

// #include<iostream>
// using namespace std;
// class stack{
//     public:int st[100];
//     int top;
//     int n;
//     stack(){
//         n=10;
//         top=-1;
//     }
//     void push(int value){
//         if(top==n-1) cout<<"Stack overflow"<<endl;
//         else{
//             top++;
//             st[top]=value;
//         }
//     }
//     void pop(){
//         if(top==-1) cout<<"stack underflow"<<endl;
//         else{
//             int garbage=st[top];
//             top--;
//         }
//     }
//     void display(){
//         if(top>=0){
//             for(int i=top;i>=0;i--){
//                 cout<<st[i]<<endl;
//             }
//         }
//     }

// };
// int main(){
//     stack s1;
//     s1.push(1);
//     s1.push(1);
//     s1.push(1);
//     s1.push(1);
//     s1.push(1);
//     s1.push(1);
//     s1.push(1);
//     s1.pop();
//     s1.pop();
//     s1.pop();
//     s1.pop();
//     s1.pop();
//     s1.pop();
//     s1.display();
// }

// #include<iostream>
// using namespace std;
// class queue{
//     public: int q[100];
//     int n;
//     int front;
//     int rear;
//     queue(){
//         n=10;
//         front=-1;
//         rear=-1;
//     }
//     void enque(int val){
//         if(rear==n-1) cout<<"queue overflow"<<endl;
//         else if(front==-1){
//             front++;
//             rear++;
//             q[rear]=val;
//         }
//         else{
//             rear++;
//             q[rear]=val;
//         }
//     }
//     void dequeue(){
//         if(rear==-1) cout<<"queue underflow"<<endl;
//         else if(rear==front){
//             int garbage=q[front];
//             rear=front=-1;
//         }
//         else{
//             int garbage=q[front];
//             front++;
//         }
//     }
//     void peek(){
//         cout<<q[front];
//     }
//     void display(){
//         if(front>=0){
//             for(int i=front;i<=rear;i++){
//                 cout<<q[i]<<endl;
//             }
//         }
//     }
// };
// int main(){
//     queue q1;
//     q1.enque(2);
//     q1.peek();
//     // q1.enque(2);
//     // q1.enque(2);
//     // q1.enque(2);
//     // q1.enque(2);
//     // q1.enque(2);
//     // q1.enque(2);
//     // q1.enque(2);
//     // q1.enque(2);
//     // q1.enque(2);
//     // q1.dequeue();
//     // q1.dequeue();
//     // q1.dequeue();

//     q1.display();
// }

// #include<iostream>
// using namespace std;
// class node{
//     public:int data;
//     node *next;
// };
// int main(){
//     node *head=nullptr;
//     node *n1=new node();
//     n1->data=10;
//     n1->next=head;
//     head=n1;
//     node *n2=new node();
//     n2->data=20;
//     n2->next=head;
//     head=n2;
//     node *n3=new node();
//     n3->data=30;
//     n3->next=head;
//     head=n3;
//     node *n4=new node();
//     n4->data=40;
//     n4->next=head;
//     head=n4;
//     node *n5=new node();
//     n5->data=50;
//     n5->next=head;
//     head=n5;

//     node *temp=head;
//     int val;
//     cout<<"enter the element you want to search :"<<endl;
//     cin>>val;
//     int flag=0;
//     while(temp!=nullptr){
//         if(temp->data==val){
//              flag=1;
//             break;
//         }
//         else temp=temp->next;
//     }
//     if(flag==1) cout<<"the element is present in linked list "<<endl;
//     else cout<<"the element is not present in the llist "<<endl;
//     return 0;


// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};
//     int s=5;
//     int l=0,h=4, m;
//     while(l<=h){
//         m=(l+h)/2;
//         if(arr[m]==s){cout<<m<<endl;
//         return 0;
//         }
//         else if(arr[m]>s) h=m-1;
//         else l=m+1;
//     }

// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};
//     int s=2;
//     for(int i=0;i<5;i++){
//         if(arr[i]==s){
//             cout<<"the index is :"<<i<<endl;
//             break;
//         }
//     }

// }

// #include<iostream>
// using namespace std;
// class shape{
//     public:
//     string shape;
    

// };
#include<iostream>
using namespace std;
class node{
    public:int data;
    node *next;
};
int main(){
    node *head=nullptr;
    
    node *n1=new node();
    n1->data=4;
    n1->next=head;
    head =n1;
    
    node* n2=new node();
    n2->data=33;
    n2->next=head;
    head=n2;

    node *n3=new node();
    n3->data=2;
    n3->next=head;
    head=n3;


    node *n4=new node();
    n4->data=5;
    n4->next=head;
    head=n4;

    // node *prev=head;
    // node *temp=head->next;


    node *p=head;
    node *q=nullptr;
    node *r=nullptr;

    while(head!=nullptr){
        cout<<head->data<<endl;
        head=head->next;
    }

    while(p!=nullptr){
        r=q;
        q=p;
        p=p->next;
        q->next=r;

    }

    cout<<"the linked list is reversed "<<endl;
    while(q!=nullptr){
        cout<<q->data<<endl;
        q=q->next;
    }











    // while(temp!=nullptr){
    //     if(prev->data!=temp->data){
    //         prev=temp;
    //         temp=temp->next;
    //     }
    //     else{
    //         prev->next=temp->next;
    //         delete temp;
    //         temp=prev->next;
    //     }
    // }

    return 0;
}














 



