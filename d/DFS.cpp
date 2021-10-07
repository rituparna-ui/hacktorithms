#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
	//Function to return a list containing the DFS traversal of the graph.
	
	void dfs(vector<int> &ans, bool visited[],vector<int> adj[],int v){
	    visited[v] = true;
	    ans.push_back(v);
	    vector<int>::iterator itr;
	    for(itr = adj[v].begin();itr != adj[v].end(); ++itr){
	        if(visited[*itr] == false){
	           
	        dfs(ans,visited,adj,*itr); 
	        }
	    }
	}
	
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    bool visited[V];
	    for(int i=0;i< V;i++){
	        visited[i] = false;
	    }
	    vector<int> ans;
	    for(int i=0;i<V;i++){
	        if(visited[i] == false){
	            dfs(ans,visited,adj,i);
	        }
	    }
	    return ans;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int>ans=obj.dfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}  // } Driver Code Ends
