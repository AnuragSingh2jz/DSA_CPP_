#include<bits/stdc++.h>
using namespace std;

bool dfs(int src,int parent,vector<vector<int>>& lst,vector<int>& visited){
    visited[src] = true;
    
    for(auto& adjnode : lst[src]){
        if(!visited[adjnode]){
            if(dfs(adjnode,src,lst,visited) == true){
                return true;
            }else if(adjnode!=parent) return false;
        }
    }
    return false;

}

int main(){
    vector<vector<int>> grid = {
    {0,1,1,0,0,0,0}, // 1
    {1,0,0,0,1,0,0}, // 2
    {1,0,0,0,0,1,1}, // 3
    {0,0,1,0,0,0,0}, // 4
    {0,1,0,0,0,0,1}, // 5
    {0,0,1,0,0,0,1}, // 6
    {0,0,1,0,1,1,0}  // 7
};
vector<vector<int>> lst(grid.size());

int n = grid.size();
int m = grid[0].size();
vector<int> visited(n,false);
for(int i=0;i<n;i++){
    for(int j = 0;j<m;j++){
        if(grid[i][j] == 1){lst[i].push_back(j);}
    }
}
bool flag;
    for(int i=0;i<n;i++){
        
        if(!visited[i]){
            if(dfs(i,-1,lst,visited)){ flag = true; break;}
        }

    }
    cout<<flag<<endl;

    return 0;

}