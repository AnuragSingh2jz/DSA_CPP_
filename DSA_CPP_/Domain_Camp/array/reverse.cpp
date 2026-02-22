#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a = {23,43,54,76,89};
    int n = a.size();
    int temp;
    for(int i =0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }

    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
}