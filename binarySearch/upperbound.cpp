#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10] = {2,3,6,7,8,8,11,11,11,12};
    // fing the upper bound means k = 8 res = 11
    int ans;
    int k = 8;
    int l = 0;
    int h = 9;
    while(l<=h){
        int m = (l+h)/2;
        if(a[m]>k) {
            ans = m;
            h = m-1;
        }else l=m+1;
    }
        cout<<ans<<endl;
} 