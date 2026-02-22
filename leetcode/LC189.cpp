// hard <      rotate by k to the right >
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {-1,-100,3,99};
    int k = 2;
    // vector<int> temp ;
        int n = nums.size();
        vector<int> temp;

    for(int i = n-k;i<n;i++){
    temp.emplace_back(nums[i]);
    }

    for(int i = 0 ;i<n-k;i++){
        temp.emplace_back(nums[i]);
    }

    for(int i =0;i<n;i++){
        nums[i] = temp[i];
    }


    for(int i =0;i<n;i++){
        cout<<nums[i]<<"\t";
    }

    
}