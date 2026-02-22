#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> nums = {5,6,7,0,1,2,3};
    int l = 0;
    int h = nums.size()-1;

    int min = INT16_MAX;

    while(l<=h){
        int m = (l+h)/2;
        if(nums[l]<=nums[m]){
            if(min>nums[l]) min = nums[l];
            l = m+1;
        }else{
            if(min>nums[m]) min = nums[m];
            h = m-1;
        }
    }
    cout<<min<<endl;

}