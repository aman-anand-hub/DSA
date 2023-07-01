#include<bits/stdc++.h>
using namespace std;
#define V 8
#define pb push_back
unordered_map<int,vector<int>> adj,rev;

void DFS1(int node, vector<bool> &vis, stack<int> &s)
{
	vis[node]=true;
	for(int x:adj[node])
	{
		if(!vis[x])
		{
			DFS1(x,vis,s);
		}
	}
	s.push(node);
}

void reverse()
{
	for(int i=0;i<V;i++)
	{
		for(int x:adj[i])
		{
			rev[x].pb(i);
		}
	}
}

void DFS2(int node, vector<bool> &vis)
{
	cout<<node<<' ';
	vis[node]=true;
	for(int x:rev[node])
	{
		if(!vis[x]) DFS2(x,vis);
	}
}

void findSCCs()
{
	stack<int> s;
	vector<bool> vis(V,false);
	for(int i=0;i<V;i++)
	{
		if(!vis[i])
		{
			DFS1(i,vis,s);
		}
	}
	reverse();
	for(int i=0;i<V;i++) vis[i]=false;
	while(!s.empty())
	{
		int curr=s.top();
		s.pop();
		if(!vis[curr])
		{
			DFS2(curr,vis);
			cout<<endl;
		}
	}
}

int main()
{
	adj[0].pb(1);
	adj[1].pb(2);
	adj[2].pb(0);
	adj[2].pb(3);
	adj[3].pb(4);
	adj[4].pb(5);
	adj[4].pb(7);
	adj[5].pb(6);
	adj[6].pb(4);
	adj[6].pb(7);
	findSCCs();
}

/*
#include<bits/stdc++.h>
using namespace std;
#define V 8
#define pb push_back
unordered_map<int,vector<int>> adj,rev;

void DFS1(int node, vector<bool> &vis, stack<int> &s)
{
	vis[node]=true;
	for(int x: adj[node])
	{
		if(!vis[x])
		{
			DFS1(x,vis,s);
		}
	}
	s.push(node);
}

void reverse()
{
	for(int i=0;i<V;i++)
	{
		for(int x: adj[i])
		{
			rev[x].pb(i);
		}
	}
}

void DFS2(int node, vector<bool> &vis)
{
	cout<<node<<' ';
	vis[node]=true;
	for(int x: rev[node])
	{
		if(!vis[x])
		{
			DFS2(x,vis);
		}
	}
}

void findSCCs()
{
	stack<int> s;
	vector<bool> vis(V,false);
	for(int i=0;i<V;i++)
	{
		if(!vis[i])
		{
			DFS1(i,vis,s);
		}
	}
	reverse();
	for(int i=0;i<V;i++) vis[i]=false;
	while(!s.empty())
	{
		int curr=s.top();
		s.pop();
		if(!vis[curr])
		{
			DFS2(curr,vis);
			cout<<endl;
		}
	}
}

int main()
{
	adj[0].pb(1);
	adj[1].pb(2);
	adj[2].pb(0);
	adj[2].pb(3);
	adj[3].pb(4);
	adj[4].pb(5);
	adj[4].pb(7);
	adj[5].pb(6);
	adj[6].pb(4);
	adj[6].pb(7);
	findSCCs();
}
*/