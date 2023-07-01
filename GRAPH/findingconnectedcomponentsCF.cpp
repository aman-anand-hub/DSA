#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int> adj[N];
vector<bool> vis(N,false);

void DFSrec(int node)
{
    vis[node]=true;
    //cout<<node<<endl;
    for(int x:adj[node])
    {
        if(!vis[x])
        {
            DFSrec(x);
        }
    }
}

int DFS(int n)
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            DFSrec(i);
            count++;

        }
    }
    return count;
}

int main()
{
    int n,m; cin>>n>>m;
    cout<<"Enter the fisst node: "<<endl;
    int s; cin>>s;
    cout<<"Now, enter the edges: "<<endl;
    for(int i=0;i<m;i++)
    {
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[x].push_back(x);
    }
    cout<<"number of disconnected graphs are: "<<DFS(n)<<endl;
}