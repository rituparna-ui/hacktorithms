#include <bits/stdc++.h>
using namespace std;

// Array of List Implementation of Graph
class Graph
{
public:
    int v; //no of vertices
    list<int> *adj;

    Graph(int n)
    {
        this->v = n;
        this->adj = new list<int>[this->v];
    }
    void addEdge(int u, int v, bool bidir = true)
    {
        adj[u].push_back(v);
        if (bidir)
        {
            adj[v].push_back(u);
        }
    }
    // DFS IMPLEMENTATION
    void dfsHelper(int src, unordered_map<int, bool> &visited)
    {
        visited[src] = true;
        cout << src << " ";
        for (auto neighbour : this->adj[src])
        {
            if (not visited[neighbour])
            {
                dfsHelper(neighbour, visited);
            }
        }
    }
    void dfs(int src)
    {
        unordered_map<int, bool> visited;
        dfsHelper(src, visited);
    }

    int connectedCom()
    {
        unordered_map<int, bool> visited;
        int result = 0; //stores the components
        for (int i = 0; i < v - 1; i++)
        {
            if (not visited[i])
            {
                //call dfs
                dfsHelper(i, visited);
                result++;
            }
        }
        return result;
    }
};

void Solve()
{
    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(2, 1);
    g.addEdge(3, 2);
    g.addEdge(4, 5);
    cout << endl
         << g.connectedCom();
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
        Solve();
    // for (int i = 1; i <= T; i++)
    // {
    // 	cout << "Case #" << i << ": ";
    // 	Solve();
    // 	cout << endl;
    // }
}
