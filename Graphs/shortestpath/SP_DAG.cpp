#include<bits/stdc++.h>
using namespace std;
void dfs(int node,vector<vector<pair<int,int>>>& lst,stack<int>& stk,vector<bool>& visited){
    visited[node] = 1;
    for(auto& adj : lst[node]){
        if(!visited[adj.first]){
            dfs(adj.first,lst,stk,visited);
        }
    }
    stk.push(node);
}

int main(){
    int n = 6;
    int src = 0;
    int m = 7;
    vector<vector<int>> edges = {
        {0,1,2},
        {0,4,1},
        {4,5,4},
        {4,2,2},
        {1,2,3},
        {2,3,6},
        {5,3,1}
    };
    vector<vector<pair<int, int>>> lst(n);

    vector<int> dist(n,INT_MAX);
    dist[src] = 0;
    for(int i = 0;i<m;i++){
        int a = edges[i][0];
        int b = edges[i][1];
        int c = edges[i][2];
        lst[a].push_back({b,c});
    };
    
    // make a topo of this list
    
    stack<int> stk;
    vector<bool> visited(n,0);
    for(int i =0;i<n;i++){
        if(!visited[i]){
            dfs(i,lst,stk,visited);
        }
    }
    /*
    {{1, 2}, {4, 1}}, // from node 0 
    {{2, 3}}, // from node 1 
    {{3, 6}}, // from node 2 
    {},     // from node 3 {{5, 4}, 
    {2, 2}}, // from node 4 
    {{3, 1}} // from node 5
    
    
    if(dist[b]>c) dist[b] = c;
    */
    dist[0] = 0;
    while(!stk.empty()){
        int x = stk.top();
        for(auto& adj : lst[x]){
            int wt = adj.second;
            if(dist[x]+ wt < dist[adj.first] ){
                dist[adj.first] = dist[x]+wt ;
            }
        }
        stk.pop();


    }

    for(auto x : dist){
        cout<<x<<" ";
    }



    











}