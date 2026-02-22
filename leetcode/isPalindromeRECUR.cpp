#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s,int i){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size() - i - 1]) return false;
    else return isPalindrome(s,i+1);
}

int main(){
    string s = "12221";
    cout<<isPalindrome(s,0); // 1 for true and 0 for false
    return 0;
}
