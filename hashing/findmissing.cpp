#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a= {0,1};
    int max = a[0];
    int n = a.size();


    for(int i =0;i<n;i++){
        if(max<a[i]) max = a[i];
    }

    vector<int> hash(max+1,0);

    for(int i =0;i<n;i++){
        hash[a[i]]+=1;
    }
    bool missing_num = false;

    for(int i =0;i<=max;i++){
        if(hash[i]<1) {
            cout<<i<<endl;
            missing_num = true;
        }
    }
    if(missing_num == false) cout<<max+1<<endl; // agar beech mai kahi bhi missing element nahi rha to max+1



}