#include<bits/stdc++.h>
using namespace std;
int happynum(int n){
    int b = 0;
    while(n>0){
        int a = n%10;
        b = b + a*a;
        n = n/10;
    }
    return b;

}
// floyd's tortoise and hare method
bool check(int n){
    int slow  = n;
    int fast  = happynum(n);
    while(fast!=1 && slow != fast){
        slow = happynum(slow);
        fast = happynum(happynum(fast));
    }
    return fast == 1;
}
int main(){
    int n = 15;
    cout<<check(n);
    


    return 0;
}