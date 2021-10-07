#include<bits/stdc++.h>
using namespace std;


//adding edges for directed graphs
void addEdgeDirected(vector<int>adj[],int u,int v)
{
	adj[u].push_back(v);
}

//adding edges for undirected graphs
void addEdgeUndirected(vector<int>adj[],int u,int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

//printing the graph
void printGraph(vector<int>adj[],int v)
{
	for(int i=0;i<v;i++)
	{
		for(int x:adj[i])
		{
			cout<<x<<" ";
		}
		cout<<"\n";
	}
}

void DFS(vector<int>adj[],int v,vector<bool> &visited )
{
	visited[v]=true;
	for(int u:adj[v])
	{
		if(!visited[u])
		{
			DFS(adj,u,visited);
		}
	}
}

//mother of graph : all vertices can be reached from here
int findMother(vector<int>adj[],int v)
{
	vector <bool> visited(v, false);
	int lastvisiteddfs=0;

	// Do a DFS traversal and find the last finished
    // vertex 
    for (int i = 0; i < v; i++)
    {
        if (visited[i] == false)
        {
            DFS(adj,i, visited);
            lastvisiteddfs = i;
        }
    }

    fill(visited.begin(), visited.end(), false);
    //check if all nodes can be visted from here or not
    DFS(adj,lastvisiteddfs, visited);

    //if any node cannot be visited return -1
    for (int i=0; i<v; i++)
        if (visited[i] == false)
            return -1;
 
    return lastvisiteddfs;
 
}

int main()
{
	int v=7;
	vector<int>adj[v];
	// cin>>v;
	addEdgeDirected(adj,0, 1);
    addEdgeDirected(adj,0, 2);
    addEdgeDirected(adj,1, 3);
    addEdgeDirected(adj,4, 1);
    addEdgeDirected(adj,6, 4);
    addEdgeDirected(adj,5, 6);
    addEdgeDirected(adj,5, 2);
    addEdgeDirected(adj,6, 0);

    // printGraph(adj,v);
    cout << "A mother vertex is " << findMother(adj,v);
 
    return 0;
}
