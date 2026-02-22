#include<iostream>
using namespace std;
class queue{
    public:int arr[100];
    int n;
    int front;
    int rear;
    queue(){
        n=10;
        front=-1;
        rear=-1;
    }

    void enqueue(int val){
        if(front==-1 && rear==-1){
            front++;
            rear++;
            arr[rear]=val;
        }
        else if(rear==n-1 && front!=0){
            rear==0;
            rear++;
            arr[rear]=val;
        }
        else if(front==rear && front!=-1 &&rear!=-1){
            cout<<"queue is full"<<endl;
        }
        else{
            rear++;
            arr[rear]=val;
        }

    }
};
int main(){
    queue q1;
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.enqueue(5);
}