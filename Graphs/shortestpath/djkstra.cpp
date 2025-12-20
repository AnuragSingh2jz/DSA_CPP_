#include<bits/stdc++.h>
using namespace std;
using t =  pair<int,int>;
int main(){

//     Input: n = 6, m= 7
// edges =[[0,1,2],[0,4,1],[4,5,4],[4,2,2],[1,2,3],[2,3,6],[5,3,1]]
//  

    int n = 6,m = 7;
   vector<vector<int>> edges = {
        {0, 1, 2},
        {0, 4, 1},
        {4, 5, 4},
        {4, 2, 2},
        {1, 2, 3},
        {2, 3, 6},
        {5, 3, 1}
    };

    vector<vector<pair<int,int>>> lst(n);
    for (auto &e : edges) {
        int u = e[0], v = e[1], wt = e[2];
        lst[u].push_back({v, wt}); 
        lst[v].push_back({u,wt});
    }

    vector<int> dist(n,INT_MAX);
    vector<int> parent(n);

    for(int i =0;i<n;i++){
        parent[i] = i;
    }

    priority_queue<t,vector<t>,greater<t>> pq;
    pq.push({0,0});
    dist[0] = 0;
    
    while(!pq.empty()){
        int u = pq.top().second;
        int d = pq.top().first;
        pq.pop();
        if(d > dist[u]) continue;

        for(auto& adj : lst[u]){
            int v = adj.first;
            int wt = adj.second;
            if(dist[u]+wt < dist[v]){
                dist[v] = dist[u]+wt;
                parent[v] = u;
                pq.push({dist[v],v});
            }
        }
        
        
        
    }



    
    int i = n-1;
    vector<int> ans;
    while(i!=0){
        ans.push_back(i);
        i = parent[i];
    }
    ans.push_back(0);
    reverse(ans.begin(),ans.end());
    
    for(int x : ans) cout<<x <<" ";
    
    
    
    
    return 0;


    




}