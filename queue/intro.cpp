#include<iostream>
using namespace std;
class queue{
    public:int q[100];
    int front;
    int rear;
    int n;
    
    queue(int f){
    front=-1;
    rear=-1;
    n=f;
    }

    void enque(int value){
        if(rear==n-1){
            cout<<" queue overflow "<<endl;
        }
        else if(front==-1){
            front++;
            rear++;
            q[rear]=value;
        }
        else{
            rear++;
            q[rear]=value;
        }
    }
    void dequeue(){
        if(front==-1){
            cout<<" queue underflow "<<endl;
        }
        else if(front==rear){
            rear=-1;
            front=-1;
        }
        else{

            front++;

        }
    }
    void display(){
        for(int i=front;i<=rear;i++){
            cout<<q[i]<<"\t";
        }
    }

};
int main(){
    int f;
    cout<<"enter the value of n ";
    cin>>f;
    queue q1(f);
    cout<<endl;
    q1.enque(1);
    q1.enque(23);
    q1.enque(3);
    q1.enque(4);
    q1.enque(5);
    q1.enque(6);
    q1.enque(5);
    q1.enque(4);

    q1.display();
}
