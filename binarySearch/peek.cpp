#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {1,2,3,4,5,5,6,5};
    int l =0;
    int h = nums.size()-1;
    while(l<=h){
        int m = (l+h)/2;
        if(nums[m]>nums[m+1] &&nums[m]>nums[m-1] ){
            cout<<m<<endl;
            return 0;
        }else if(nums[m]<nums[m+1]) l=m+1;
        else h=m-1;
        
    }
}