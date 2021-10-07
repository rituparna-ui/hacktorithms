#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	
	void dfs(vector<int> g[],int i, stack<int> &Stack,bool visited[]){
        visited[i] = true;
        vector<int>::iterator itr;
        for(itr=g[i].begin();itr != g[i].end(); ++itr){
            if(visited[*itr] == false){
                dfs(g,*itr,Stack,visited);
            }
        }
        Stack.push(i);
    }
	
	vector<int> topoSort(int v, vector<int> adj[]) 
	{
	    // code here
	    bool visited[v];
        for(int i=0;i<v;i++){
            visited[i] = false;
        }
        vector<int> ans;
        stack<int> Stack;
        for(int i=0;i<v;i++){
            if(visited[i] == false){
                dfs(adj,i,Stack,visited);
            }
        }
        while(Stack.empty() == false){
            ans.push_back(Stack.top());
            Stack.pop();
        }
        return ans;
	}
};


int check(int V, vector <int> &res, vector<int> adj[]) {
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}  // } Driver Code Ends
