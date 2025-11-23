#include<bits/stdc++.h>
using namespace std;
// sliding window max 239
vector<int> swm_dq(vector<int>& nums,int k){
    int n = nums.size();
    vector<int> res;
    deque<int> dq;
    int j = 0,i = 0;
    while(j<n){
            // shrink the deque for largest element (monotonic deque)
            while(!dq.empty() && nums[dq.back()]<nums[j]){
                dq.pop_back();
            }
            dq.push_back(j);
            // know check the size of the window 
            if(j-i+1 <k) j++;
            else if(j-i+1 == k){
                res.push_back(nums[dq.front()]);
                if(dq.front() == i) dq.pop_front();
                i++;
                j++;
            }
    }
    return res;
}


//using heap


int main(){
    vector<int> nums = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    vector<int> res = swm_dq(nums,k);

    for(auto& i : res){
        cout<<i<<" ";
    }
    return 0;
}