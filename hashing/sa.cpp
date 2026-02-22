#include<bits/stdc++.h>
using namespace std;
void removeDub(int a[]){
    vector<int> temp;

    int max =a[0];
    for(int  i =0;i<7;i++){
        if(max<a[i]) max = a[i];
    }


    int hash[max+1] = {0};

    for(int i =0;i<7;i++){
        hash[a[i]]+=1;
    }

    for(int i=0;i<max+1;i++){
        if(hash[i]>0) temp.push_back(i);
    }
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<endl;
    }
}
int main(){
    int a[7] = {1,2,2,3,1,6,6};
    removeDub(a);
    
    


    return 0;
}