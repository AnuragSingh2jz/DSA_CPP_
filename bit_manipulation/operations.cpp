#include<iostream>
using namespace std;
bool setORnot(int n,int i){
    return n>>i&1?true:false;
}

int setIthbit(int n,int i){
    return n|(1<<i);
}

int clearIth_bit(int n,int i){
    return n&~(1<<i);
}

int toggleIth_bit(int n,int i){
    return n^(1<<i);
}

bool powerOF2(int n){
    return (n>0 && n&(n-1)) == 0 ? true:false;
}

int main(){
    int n = 13;
    int i = 1;

    // check if ith bit is set(1) or not
    cout<<setORnot(n,i)<<endl;

    // set the ith bit (0 => 1) (1 => 1)
    cout<<setIthbit(n,i)<<endl; // 15

    cout<<clearIth_bit(14,i)<<endl;

    cout<<toggleIth_bit(12,2)<<endl;


    cout<<powerOF2(16)<<endl;

    cout<<~-17;


    return 0;

}
