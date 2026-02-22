#include<bits/stdc++.h>
using namespace std;
// lc  1020
void bfs(queue<pair<int,int>>& q, vector<vector<int>>& visited){
    int delrow[4] = {-1,0,1,0};
    int delcol[4] = {0,1,0,-1};
    int n = visited.size();
    int m = visited[0].size();

    while(!q.empty()){
        int i = q.front().first;
        int j = q.front().second;
        q.pop();
        for(int k = 0;k<4;k++){
            int row = i + delrow[k];
            int col =j+delcol[k];

            if(row>=0 && row<n && col>=0 && col<m && visited[row][col] == -1){
                visited[row][col] = 0;
                q.push({row,col});
            }
        }
    }
}
int main(){
    vector<vector<int>> grid = {
        {0,0,0,0},
        {1,0,1,0},
        {0,1,1,0},
        {0,0,0,0}
    };
    queue<pair<int,int>> q;
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> visited(n,(vector<int> (m,0)));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(grid[i][j] == 1) visited[i][j] = -1;
        }
    }

    int i = 0 ,j = 0;
   

    // top
    for(int i =0;i<m;i++){
        if(grid[0][i] == 1) {
            visited[0][i] = 0;
            q.push({0,i});
        }
        if(grid[m-1][i] == 1){
            visited[m-1][i] = 0;    
            q.push({m-1,i});
        }


    }
    for(int i =0;i<n;i++){
        if(grid[i][0] == 1) { q.push({i,0}); visited[i][0] = 0;}
        if(grid[i][n-1] == 1)  { q.push({i,m-1});visited[i][n-1] = 0;}
    }

    bfs(q,visited);
    int c = 0;
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            if(visited[i][j] == -1) c++;
        }
    }
    cout<<"no of land which cannot be walked by island of edge : ";
    cout<<c<<endl; 

    return 0;
}