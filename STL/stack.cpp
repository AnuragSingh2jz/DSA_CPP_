//LIFO
// stack [know already] every operation like top(peek) push pop size are O(n)
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> stk;
    stk.push(2);
    stk.push(1);
    stk.push(3);
    stk.push(4);
    stk.push(5);

    cout<<stk.top(); //top element without removing it

    cout<<endl;

    cout<<stk.size(); // tells the size of the stack

    return 0;
}