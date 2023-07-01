#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int> adj[N];
vector<bool> vis(N,false);

void dfsrec(int node)
{
    vis[node]=true;
    cout<<node<<endl;
    for(int x:adj[node])
    {
        if(!vis[x])
        {
            dfsrec(x);
        }
    }
}


int main()
{
    int n,m; cin>>n>>m;
    cout<<"Enter the first node: "<<endl;
    int s; cin>>s;
    cout<<"Now, enter the edges: "<<endl;
    for(int i=0;i<m;i++)
    {
        int x,y; cin>>x>>y;
        adj[x].push_back(y);
        adj[x].push_back(y);
    }
    cout<<"DFS traversal: "<<endl;
    dfsrec(s);
}