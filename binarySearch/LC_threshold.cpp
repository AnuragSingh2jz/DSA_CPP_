#include<bits/stdc++.h>
using namespace std;
int ceil(vector<int> &nums,int x){
    int sum = 0;
    for(int i = 0;i<nums.size();i++){
        if(nums[i]%x!=0) sum+=(nums[i]/x)+1;
        else sum+=(nums[i]/x);
    }
    return sum;
}
int main(){
    vector <int> nums = {1,2,5,9};
    int threshold  = 6;
    int max = *max_element(nums.begin(),nums.end());
    int l = 1;
    int h = max+1;
    int ans;
    while(l<=h){
        int m =(l+h)/2;
        if(ceil(nums,m)<=threshold) {
            ans = m;
            h=m-1;
        }
        else l=m+1;
    }
    cout<<ans<<endl;

}