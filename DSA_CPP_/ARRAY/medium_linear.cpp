#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums ={2,2,4,5,7,9,11};
    vector<int> nums1 ={1,3,6,8,9};
    int n1 = nums.size();
    int n2 = nums1.size();
    vector<int> ans;
    int i =0;
    int j =0;
    while(i<n1 && j<n2){
        if(nums[i]<nums1[j]) ans.emplace_back(nums[i++]);
        else ans.emplace_back(nums1[j++]);
    }
    while(i<n1) ans.emplace_back(nums[i++]);
    while(j<n2) ans.emplace_back(nums1[j++]);

    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<endl;
    // }
    double x;
    int l=0;
    int h=ans.size()-1;
    
        int m = (l+h)/2;
        if(ans.size()%2==0){
             x = (m + (m+1))/2.0;
        }else x = m;
    cout<<x<<endl;

    
    
    return 0;
    
}