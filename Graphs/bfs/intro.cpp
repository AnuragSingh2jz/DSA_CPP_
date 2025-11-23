#include <bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>> &arr, int start, int n)
{
    queue<int> q;
    vector<int> visited(n, 0);
    cout << start << " ";
    visited[start] = 1;
    q.push(start);
    while (!q.empty())
    {
        int i = q.front();
        q.pop();
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 1 && visited[j] == 0)
            {
                cout << j << " ";
                q.push(j);
                visited[j] = 1;
            }
        }
    }
}

int main()
{
    vector<vector<int>> arr = {// matrix representation of the graph
                               {0, 0, 1, 1, 1, 0, 0, 0},
                               {0, 1, 0, 1, 0, 0, 0, 0},
                               {0, 1, 1, 0, 1, 1, 0, 0},
                               {0, 1, 0, 1, 0, 1, 0, 0},
                               {0, 0, 0, 1, 1, 0, 1, 1},
                               {0, 0, 0, 0, 0, 1, 0, 0},
                               {0, 0, 0, 0, 0, 1, 0, 0}};

    bfs(arr, 0, 8);

    return 0;
}
