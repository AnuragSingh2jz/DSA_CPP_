// left odd even patter && right even odd patern
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector <int> nums = {1,1,2,2,3,3,4,5,5,6,6};
//     int n =nums.size();
//     if(n == 1) return 0;
//     if(nums[0]!=nums[1]) {
//         cout<<nums[0]<<endl;
//             return 0;
//     }
//     if(nums[n-1]!=nums[n-2]) {
//         cout<<nums[n-1]<<endl;
//             return 0;
//     }

//     int l = 1;
//     int h = nums.size()-2;
//     while(l<=h){
//         int m =(l+h)/2;
//         if(nums[m]!=nums[m-1] && nums[m]!=nums[m+1]) {
//             cout<<nums[m]<<endl;
//             return 0;
//         }
//         if(m%2==0 && nums[m] == nums[m+1] || m%2 == 1 && nums[m] == nums[m-1] ) l=m+1; 
//         else h=m-1;
//     }


// }


#include<bits/stdc++.h>
using namespace std;
int search(vector<int> &nums){
    int n = nums.size();
    if(n==1) return nums[0];
    if(nums[0]!=nums[1]) return nums[0];
    if(nums[n-1]!=nums[n-2]) return nums[n-1];
    int l = 1;
    int h = n-2;
    while(l<=h){
        int m = (l+h)/2;
        if(nums[m]!=nums[m-1] && nums[m]!=nums[m+1] ) return nums[m];
        if(m%2 == 0 && nums[m+1] == nums[m] ||m%2 == 1 && nums[m-1] == nums[m] ) l =m+1;
        else h = m-1;
    }
}
int main(){
    vector<int> nums = {1,1,2,2,3,3,4,4,5,6,6};
    cout<<search(nums);
    // edge case








    return 0;
}























