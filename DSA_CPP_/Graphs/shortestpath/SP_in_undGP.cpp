#include<bits/stdc++.h>
using namespace std;
// if all the node are the unit dist appart find the dist form the 0 node
int main(){
    int n = 9;
    int src = 0;
    vector<vector<int>> lst = {
        {1,3},
        {0,2},
        {1,6},
        {0,4},
        {3,5},
        {4,6},
        {2,5,7,8},
        {6,8},
        {6,7}
    };

    /*
    
    */

    vector<int> dist(n,INT_MAX);
    queue<pair<int,int>> q;
    q.push({src,0});
    dist[src] = 0;
    while(!q.empty()){
        int node = q.front().first;
        int parent_dist = q.front().second;
        q.pop();
        for(auto& adj: lst[node]){
            if(parent_dist+1 <dist[adj]){
                dist[adj] = parent_dist+1;
                q.push({adj,parent_dist+1});
            }
        }
    }

    for(int i = 0;i<n;i++){
        cout<<dist[i]<<endl;
    }


}