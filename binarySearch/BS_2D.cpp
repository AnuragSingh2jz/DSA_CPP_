#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> nums = {{1,2,4},{5,6,7},{8,9,10}};
    int target = 7;
    int n = nums.size();
    int m = nums[0].size();
    int l = 0;
    int h = m*n-1;

    while(l<=h){
        int mid =(l+h)/2;
        int row = mid/m;
        int col = mid%m;
        if(nums[row][col] == target){
            cout<<"["<<row<<"]"<<"["<<col<<"]"<<endl;
            return 0;
        }
        else if(nums[row][col]<target) l=mid+1;
        else h=mid-1;
    }
    return 0;

}