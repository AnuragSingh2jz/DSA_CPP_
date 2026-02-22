#include<bits/stdc++.h>
using namespace std;

bool bfs(int src,vector<vector<int>>& lst,vector<int>& visited){
    queue<pair<int,int>> q;
    visited[src] = 1;
    q.push({src,-1});

    while(!q.empty()){
        int node = q.front().first;
        int parent = q.front().second;

        for(auto& adjnode: lst[node]){
            if(!visited[adjnode] ){
                visited[adjnode] = 1;
                q.push({adjnode,node});
            }
            else if(adjnode!=parent){
                return true;
            }
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

// 1 ->{2,3}
// 2 ->{1,5}
// 3 ->{1,7,6}
// 4 ->{3}
// 5 ->{2,7}
// 6 ->{7,3}
// 7 ->{5,6}
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
            if(bfs(i,lst,visited)){ flag = true; break;}
        }

    }
    cout<<flag<<endl;

    return 0;



}