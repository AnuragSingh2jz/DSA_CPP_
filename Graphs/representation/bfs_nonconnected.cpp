#include<iostream>
#include<queue>
#include<vector>

using namespace std;

vector<int> bfs(vector<vector<int>>& list,int n){
    vector<bool> visited(n+1,false);
    vector<int> res;
    for(int i = 1;i<=n;i++){
        if(!visited[i]){
            queue<int> q;
            q.push(i);
            visited[i] = true;
            while(!q.empty()){
                int curr =q.front();
                q.pop();
                res.push_back(curr);
                for(auto& c : list[curr]){
                    if(!visited[c]) {
                        q.push(c);
                        visited[c] = true;
                    }
                }
            }
        }
    }
    return res;
}


int main(){
    // taking the input of the graph
    int n,m;
    cout<<"enter the number of verices and edges :"<<endl;
    cin>>n>>m;

    vector<vector<int>> list(n+1);

    for(int i =0;i<m;i++){
        int u,v;
        cin>>u>>v;
        list[u].push_back(v);
        list[v].push_back(u);

    }

    vector<int> res = bfs(list,n);

    cout << "BFS traversal:" << endl;
    for(int node : res)
    cout << node << " ";
    cout << endl;





}