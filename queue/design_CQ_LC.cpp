#include<iostream>
using namespace std;

class queue{
    private:
    int *arr;
    int size;
    int front,capacity;

    public:
    queue(int c){
        arr = new int[c];
        capacity = c;
        size = 0;
        front = 0;
    }
    int getRear(){
        if(size == 0) return -1;
        int rear = (front+size -1) %capacity;
        return rear;
    }
    int getFront(){
        if(size == 0) return -1;
        int x = arr[front];
        return x;
    }
    void enqueue(int x){
        if(size == capacity) return ;
        int rear = (front+size) %capacity;
        arr[rear] = x;
        size++;
    }
    int dequeue(){
        if(size == 0) return -1;
        int res = arr[front];
        front = (front+1)%capacity;
        size--;
        return res;
    }
};

int main(){
    queue q1(5);
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.dequeue();
    q1.dequeue();
    q1.enqueue(5);
    cout<<q1.getFront();
    cout<<q1.getRear();
    return 0;
}

