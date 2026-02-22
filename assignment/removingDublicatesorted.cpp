#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10] = {1,1,2,2,3,3,4,4,4,4};
    int i =0;
    for(int j =1;j<10;j++){
        if(a[i] == a[j]){}
        else{
            a[i+1] =a[j];
            i++;
        }
    }
    int n = i+1;
    for(int i =0;i<n;i++){
        cout<<a[i]<<endl;
    }


}