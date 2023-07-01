#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
}

bool DFSRec(vector<int> adj[], int s, bool vis[], bool recST[])
{
    vis[s]=true;
    recST[s]=true;
    for(int x:adj[s])
    {
        if(!vis[x] && DFSRec(adj,x,vis,recST))
        {
            return true;
        }
        else if(recST[x])
        {
            return true;
        }
    }
    recST[s]=false;
    return false;
}

bool DFS(vector<int> adj[], int V)
{
    bool vis[V];
    bool recST[V];
    for(int i=0;i<V;i++)
    {
        vis[i]=false;
        recST[i]=false;
    }
    for(int i=0;i<V;i++)
    {
        if(!vis[i] && DFSRec(adj,i,vis,recST))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int V=6;
    vector<int> adj[V];
	addEdge(adj,0,1); 
	addEdge(adj,2,1); 
	addEdge(adj,2,3); 
	addEdge(adj,3,4); 
	addEdge(adj,4,5);
	addEdge(adj,5,3);
    if(DFS(adj,V)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}