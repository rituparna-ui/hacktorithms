#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution
{
    public:
    //Function to return Breadth First Traversal of given graph.
	vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	    queue<int>q;
	    vector<int>ans;
	    q.push(0);
	    bool visited[V];
	    for(int i=0; i<V; ++i)
	        visited[i] = false;
	    visited[0]=true;
	    while(!q.empty())
	    {
	        int top = q.front();
	        q.pop();
	        ans.push_back(top);
	       //cout<<top<<' ';
	        
	        for(auto i:adj[top])
	        {
	            if(!visited[i])
	            {
	                q.push(i);
	                visited[i] = true;
	            }
	        }
	    }
	   // for(auto i:ans)
	   //     cout<<i<<' ';
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
    // 		adj[v].push_back(u);
    	}
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int>ans=obj.bfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}  // } Driver Code Ends
