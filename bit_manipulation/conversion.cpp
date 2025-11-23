#include<bits/stdc++.h>
using namespace  std;

string reverse(string s,int n){
    for(int i = 0;i<n/2;i++){
        swap(s[i],s[n-i-1]);
    }
    return s;
}



void binary_to_decimal(string s){
    int c = 0,sum=0;
    for(int i =s.size()-1;i>=0;i--){
        if(s[i] == '1') sum+=pow(2,c++);
        else c++;
    }
    cout<<sum<<endl;
}

void decimal_to_binery(int x){
    string s;
    while(x>=1){
        int a = x%2;
        if(a == 1) s+='1';
        else s+='0';
        x = x/2;
    }
    string f = reverse(s,s.size());
    cout<<f<<endl;
}


int main(){
    string s = "11111000";
    binary_to_decimal(s);
    int n = 4;

    // decimal_to_binery(n);

    // cout<<~-14<<endl;

    

    return 0;
}