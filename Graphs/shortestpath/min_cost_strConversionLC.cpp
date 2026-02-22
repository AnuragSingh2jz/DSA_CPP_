#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> p;
int main(){
    string source = "abcd";
    string target = "acbe";

    vector<char> original = {'a','b','c','c','e','d'};
    vector<char> changed = {'b','c','b','e','b','e'};
    vector<int> cost = {2,5,5,1,2,20};

    // make a graph of orignal
    vector<vector<p>> lst(26);
    for(int i = 0;i<original.size();i++){
        lst[original[i] - 'a'].push_back({changed[i]-'a',cost[i]});
    }

    // now making of dist 2d array basically memoization or cache 
    vector<vector<int>> dist (26,vector<int> (26,1e9));
    for(auto ch : source){
        int src = ch-'a';
        if(dist[src][src]!= 1e9) continue;
        priority_queue<p,vector<p>,greater<p>> pq;
        pq.push({0,src});
        dist[src][src] = 0;
        while(!pq.empty()){
            int d = pq.top().first;
            int u = pq.top().second;
            pq.pop();
            for(auto& adj  : lst[u]){
                int v = adj.first;
                int wt = adj.second;
                if(d+wt < dist[src][v]){
                    dist[src][v] = d+wt;
                    pq.push({d+wt , v});
                }
            }
        }
    }

    int ans = 0;
    for(int i = 0 ;i<source.size();i++){
        if(source[i] == target[i]) continue;
        int x = dist[source[i] - 'a'][target[i] - 'a'];
        if(x == 1e9){
            cout<<-1<<endl;
            break;
        }
        ans+=x;
    }
    cout<<ans;
}