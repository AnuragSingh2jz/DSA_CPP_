#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> nums = {{1,2,3},{4,5,6},{7,8,9}};
    int n = nums.size(); // row 
    int m = nums[0].size(); // coloumn



    for(int i =0;i<n;i++){
        for(int j = i+1;j<m;j++){ //  
            swap(nums[i][j],nums[j][i]);
        }
    }
      for(int i =0;i<n;i++){
            reverse(nums[i].begin(),nums[i].end());        
    }

    for(int i =0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<<nums[i][j]<<"  ";
        }
        cout<<endl;
        
    }


}