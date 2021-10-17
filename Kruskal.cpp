#include <bits/stdc++.h>
using namespace std;
int n,m;
const int N= 1e5+6;
vector<int>parent(N);
vector<int>sz(N);
void make_set(int v)
{
	parent[v]=v;
	sz[v]=1;
}
int find_set(int v)
{
	if(v==parent[v])
	{
		return v;
	}
	return parent[v]=find_set(parent[v]);
}
void union_sets(int a,int b)
{
	a= find_set(a);
	b= find_set(b);
	if(a!=b)
	{
		if(sz[a]<sz[b])
		{
			swap(a,b);
		}
		parent[b]=a;
		sz[a]+sz[b];
	}
}

int main()
{
	//n vertices m edges
	cin>>n>>m;
	int cost=0;
	for(int i=0;i<N;i++)
	{
		make_set(i);
	}
	vector<vector<int>>edges;
	for(int i=0;i<m;i++)
	{
		int u,v,w;
		cin>>u>>v>>w;
		edges.push_back({w,u,v});
	}
	sort(edges.begin(),edges.end());
	for(auto i: edges)
	{
		int u=i[1];
		int v=i[2];
		int w=i[0];
		int x =find_set(u);
		int y=find_set(v);
		if(x==y)
		{
			continue;
		}
		else
		{
			cout<<u<<" "<<v<<"\n";
			cost+=w;
			union_sets(u,v);
		}
	}
	cout<<cost;
}

//Time Complexity :  O(ElogV)
//Space compleixty : O(E+V)
