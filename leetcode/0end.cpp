#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5] = {0,1,2,0,1};

    int i = 0;
    int  j = 0;

    while(j<5){
        if( a[j]!=0){
            swap(a[i],a[j]);
            i++;
        }
            j++;
    }
    for(int i =0;i<5;i++){
        cout<<a[i]<<endl;
    }



    return 0;
}