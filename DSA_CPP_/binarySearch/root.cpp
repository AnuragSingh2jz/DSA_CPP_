#include<bits/stdc++.h>
using namespace std;
int main(){

    int n =25;
    int res;
//    for(int i = 1 ;i<=n;i++){
//     if(i*i<=n){
//         res = i;
//     }else break;
//    }
//    cout<<res<<endl;

    int l = 1;
    int h = n;

    while(l<=h){
        int m = (l+h)/2;
        if(m*m<=n) {
        res = m;
        l = m+1;
        }
        
        else h = m-1;
    }
    cout<<res<<endl;


    return 0;
}