// a to z = 97 to 122
// A to Z 65 to 90 

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "AnuraG";
    
    
    int j = s.size()-1;

    for(int i =0;i<=j;i++){
        if(int(s[i])<=90 && int(s[i])>=65){
            s[i] = s[i]+32;
        }
    }

    cout<<s<<endl;



    return 0;
}