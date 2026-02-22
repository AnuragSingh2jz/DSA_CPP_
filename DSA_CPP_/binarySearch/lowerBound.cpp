#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10] = {1,2,3,5,6,7,8,10,15,16};
    int ans = 10;
    int l =0;
    int h = 9;
    int s = 9;

    while(l<=h){
        int m=(l+h)/2;
        if(a[m]>=s){
            ans = m;
            h=m-1;
        }else l=m+1;
    }
    cout<<ans<<endl;



    return 0;

}