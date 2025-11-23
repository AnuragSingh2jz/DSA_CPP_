#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "todajfnettodstotonjfnrwtodsdtonjtod";
    string k = "tod";
    int m = k.size();
    
    int n = s.size();
    int res = 0;

    int i=0,j=0;

    while(i<n){
        if(s[i] == k[j]){
            j++;
            if(j == m){
                res++;
            }
        }else{
            if(j!=0){
                i-=j;
                j=0;
            }

        }
        i++;
    }
    cout<<res<<endl;
    return 0;

}