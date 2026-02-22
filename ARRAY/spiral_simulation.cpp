#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    int n = matrix[0].size()-1;
    int m = matrix.size()-1;
    vector<int> res(m*n);
    int top = 0;
    int bottom = m;
    int right = n;
    int left = 0;

    while(top<=bottom && left<=right){
        for(int i = left;i<=right;i++){    // left to right
            res.push_back(matrix[top][i]);
        }
        top++;
        for(int i = top;i<=bottom;i++){ // top to bottom
            res.push_back(matrix[i][right]);
        }  
        right--;

        if(top<=bottom){
            
            for(int i = right;i>=left;i--){ // right to left
                res.push_back(matrix[bottom][i]);
            }
            bottom--;
        
        }
        if(left<=right){

            for(int i = bottom;i>=top;i--){ // bottom to top
                res.push_back(matrix[i][left]);
            }
            left++;
        }
    }

    for(auto &i : res){
        cout<<i<<" ";
    }


    return 0;
}