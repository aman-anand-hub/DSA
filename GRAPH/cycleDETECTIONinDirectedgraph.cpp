#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
}

bool DC(vector<int> adj[], int V)
{
    vector<int> in_degree(V);
    for(int i=0;i<V;i++)
    {
        for(int u:adj[i])
        {
            in_degree[u]++;
        }
    }
    queue<int> q;
    for(int i=0;i<V;i++)
    {
        if(in_degree[i]==0) q.push(i);
    }
    int count=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int x:adj[u])
        {
            in_degree[x]--;
            if(in_degree[x]==0) q.push(x);
        }
        count++;
    }
    return count!=V;
}

int main()
{
    int V=4;
    vector<int> adj[V];
    addEdge(adj,0,1);
    addEdge(adj,1,2);
    addEdge(adj,3,0);
    addEdge(adj,2,3);
    cout<<DC(adj,V)<<endl;
}