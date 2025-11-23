// max-subarray with k size
#include<bits/stdc++.h>
using namespace std;
int max_subarray(vector<int> &nums,int k){
    int n = nums.size();
    int sum=0;
    int maxval = INT_MIN;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        if(i>=k-1){
            maxval = max(maxval,sum);
            sum -= nums[i-k+1];
        }
    }
    return maxval;
}
int main(){
    vector<int> nums = {1,2,3,4,1,2,3,4,6};
    int k = 4;
    cout<<max_subarray(nums,k);

    return 0;
}