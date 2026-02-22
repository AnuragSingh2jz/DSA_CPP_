#include<bits/stdc++.h>
using namespace std;

void first_neg_k(vector<int> &nums,int k){
    int n = nums.size();
    vector<int> res;
    int i = 0,j=0;
    bool found = false;
    while(j<n){
        j = i;
        found  = false;
        while(j<k+i){
            if(nums[j]<=0){
                
                res.push_back(nums[j]);
                found = true;
                break;
            }
            j++;
        }
        if(!found) res.push_back(0);
        i++;
    }
    

    for(int i =0;i<res.size();i++){
        cout<<res[i]<<endl;
    }

}


void first_neg_k2(vector<int> &nums,int k){
    // here i will use doubly ended queue
    
}

int main(){

    vector<int> nums = {12,-1,-7,8,-15,30,16,28};
    int k = 3;
    // brute 
    first_neg_k(nums,k);

    // OPTIMAL

    // 
    




    return 0;
}
