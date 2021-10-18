#include <bits/stdc++.h>
using namespace std;

bool checkForCycle(int s, int V, vector<int> adj[], vector<int> &vis)
{
    queue<pair<int, int>> q;
    vis[s] = 1;
    q.push({s, -1});
    while (!q.empty())
    {
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                vis[it] = 1;
                q.push({it, node});
            }
            else if (parent != it)
            {
                return true;
            }
        }
    }
    return false;
}
bool isCycle(int n, vector<int> adj[])
{
    vector<int> vis(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            if (checkForCycle(i, n, adj, vis))
                return true;
        }
    }
    return false;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> adj[n + 1];
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout << "Adjacency Matrix\n";
    for (int i = 1; i <= n; i++)
    {
        cout << i << "->";
        for (auto it : adj[i])
        {
            cout << it << " ";
        }
        cout << endl;
    }
    bool ans = isCycle(n, adj);
    cout << ans << endl;
}

// 14 12
// 1 2
// 2 3
// 3 5
// 5 7
// 7 2
// 4 6
// 4 8
// 9 10
// 10 11
// 11 9
// 12 13
// 13 14