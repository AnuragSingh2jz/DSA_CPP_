#include<bits/stdc++.h>
using namespace std;
void invert(vector<vector<int>> &matrix,int n,int m){
    for(int i = 0 ;i<matrix.size();i++){ // column
        matrix[i][m] = 0;
    }
    for(int i = 0 ;i<matrix[0].size();i++){ // row
        matrix[n][i] = 0;
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1,1,1},
        {1,0,1},
        {1,1,1}
    };

    vector<pair<int,int>> mem;

    for(int i =0;i<matrix.size();i++){
        for(int j = 0;j<matrix[0].size();j++){
            if(matrix[i][j] == 0){ 
               mem.push_back({i,j});
            }
        }
    }
    for(auto &i : mem){
        invert(matrix,i.first,i.second);
    }



    for(int i =0;i<matrix[0].size();i++){
        for(int j = 0;j<matrix.size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    


    return 0;
}