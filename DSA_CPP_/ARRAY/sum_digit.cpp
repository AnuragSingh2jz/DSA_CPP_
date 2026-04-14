#include<bits/stdc++.h>
using namespace std;

int rec(int n){
    if(n == 0) return 0;
    else return n%10+rec(n/10);
}


int main(){
    int x = 213;
    cout<<rec(x);

    return 0;
}