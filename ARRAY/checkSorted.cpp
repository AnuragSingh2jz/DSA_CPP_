#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a = {4,5,1,2,3};
    int c= 0;
    int n = a.size();
    for(int i =0;i<n;i++){
        if(a[i]<a[(i+1)%n]){}
        else c++;
    }
    if(c>1) cout<<"array is not sorted"<<endl;
    else cout<<"array is sorted" <<endl;

    return 0;
}