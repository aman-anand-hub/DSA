#include<bits/stdc++.h>
using namespace std;

const int N=1e5;
vector<int> adj[N];
vector<bool> vis(N);

bool CD(int node, int parent)
{
    vis[node]=true;
    for(int x:adj[node])
    {
        if(!vis[x])
        {
            if(CD(x,node)==true)
            {
                return true;
            }
        }
        else if(x!=parent)
        {
            return true;
        }
    }
    return false;
}

void addEdge(int x, int y)
{
    adj[x].push_back(y);
    adj[y].push_back(x);
}

int main()
{
    int n,m; cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int x,y; cin>>x>>y;
        addEdge(x,y);
    }
    if(CD(1,-1)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}