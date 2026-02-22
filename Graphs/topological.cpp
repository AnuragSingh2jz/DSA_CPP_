#include<bits/stdc++.h>
using namespace std;

void dfs(int start,vector<vector<int>>& adjlist,vector<int> &visited,stack<int>& stk){
    visited[start] = 1;
    for(auto& adj: adjlist[start]){
        if(!visited[adj]){
            dfs(adj,adjlist,visited,stk);
        }
    }
    stk.push(start);
}



int  main(){
    int m,n;
    cout<<"enter the number of edges: "<<endl;
    cin>>n;
    cout<<"enter the number of vertices"<<endl;
    cin>>m;


    vector<vector<int>> adjlist(n+1);
    for(int i =0;i<m;i++){
        int u,v;
        cout<<"enter the edges(u,v) in direction u->v :";
        cin>>u>>v;
        adjlist[u].push_back(v);
    }

    for(int i = 1;i<=n;i++){
        cout<<i<<"->";
        for(int v: adjlist[i]){
            cout<<v<<" ";
        }
        cout<<endl;
    }
    stack<int>stk;
    vector<int> visited(n+1,0);
    for(int i=1;i<=n;i++){
        
        if(!visited[i]){
            dfs(i,adjlist,visited,stk);
        }
    }

    while(!stk.empty()){
        cout<<stk.top()<<" ";
        stk.pop();
    }



    return 0;

}