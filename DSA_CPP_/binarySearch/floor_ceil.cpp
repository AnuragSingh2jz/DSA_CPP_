// floor value is the value which is <= target < smallest but closest > 
// ceil value is the value which is >= target < larger but nearest > 

#include<iostream>
using namespace std;
int main(){
    int nums[100] = {10,20,30,40,50}; // floor = 20 and ceil - 30 for target = 25
    int ans = -1;
    int target = 25;
    int l = 0;
    int h = 4;
    // while(l<=h){
    //     int m = (l+h)/2;
    //     if(nums[m]<=target) {                     ////floor
    //         ans = nums[m];
    //         l = m+1;
    //     }else h = m-1;
    // }

    while(l<=h){
        int m = (l+h)/2;
        if(nums[m]>=target) {
            ans = nums[m];         // ceil
            h = m-1;
        }else l = m+1;
    }
    cout<<ans<<endl;
}