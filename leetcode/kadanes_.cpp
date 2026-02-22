// longest sum of subarray
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {2,1,-1,-5,7,-5,-2};
    int n = nums.size();
    int sum = 0,max = nums[0];
    for(int i =0;i<n;i++){
        sum+=nums[i];
        if(sum>max) max = sum;
        if(sum<0) sum=0;
    }
    cout<<max;


    return 0;
}