#include<bits/stdc++.h>
using namespace std;


bool dfs(int start,vector<bool>& visited,vector<bool>& recuStack,vector<vector<int>> &lst){
    visited[start] = true;
    recuStack[start] = true;
    for(auto& adj : lst[start]){
        if(!visited[adj]){
           if(dfs(adj,visited,recuStack,lst)) return true; // if cycle is found 
        }else if(recuStack[adj]) return true;
    }
    recuStack[start] = false;
    return false; // if no cycle found return false;
}


int  main(){
    int m,n;
    cout<<"enter the number of edges: "<<endl;
    cin>>m;
    cout<<"enter the number of vertices"<<endl;
    cin>>n;


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
    }
    vector<bool> visited(n+1,false);
    vector<bool> recstac(n+1,false);
    bool hasCycle = false;

    for(int i=1;i<=n;i++){
        
        if(!visited[i]){
            if(dfs(i,visited,recstac,adjlist)) hasCycle = true;
        }
    }

    cout<<"staus = " <<hasCycle;

}