#include<bits/stdc++.h>
using namespace std;
void adjecency_matrix(int n,int m){
    vector<vector<int>> matrix(n,vector<int> (n,0));
    for(int i =0;i<m;i++){
        int v,u;
        cout<<"enter the v and u";
        cin>>v>>u;
        matrix[v][u] = 1;
        matrix[u][v] = 1;
    }

    for(int i =0;i<n;i++){
        cout<<i<<"->";
        for(int  j=0;j<n;j++){
            cout<<matrix[i][j]<<endl;
        }
        cout<<endl;
    }
}

void adjecency_list(int n,int m){
    
    vector<int> list[n+1];

    for(int i =0;i<m;i++){
        int v,u;
        cout<<"enter the v and u";
        cin>>v>>u;
        list[u].push_back(v);
        list[v].push_back(u);
        cout<<endl;

    }

    for(int i =0;i<=n;i++){
        cout<<i<<"->";
        for(auto& x:list[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }

}
int main(){
    // adjicency list for unidirected graph;
    int m ,n;
    cout<<"enter the number of vertices"<<endl;
    cin>>n;
    cin>>m;

    //adjecency_list(n,m);
    adjecency_matrix(n,m);



    return 0;
    
}