#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
vector<int> adj[N];
vector<bool> vis(N,0);
int main()
{
    int n,m; cin>>n>>m; //n->no. of nodes, m->no. of edges
    for(int i=0;i<m;i++)
    {
        int x,y; cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cout<<"BFS traversalof the graph is: "<<endl;
    queue<int> q;
    q.push(1);
    vis[1]=true;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        cout<<u<<endl;
        for(int x: adj[u])
        {
            if(vis[x]==false)
            {
                vis[x]=true;
                q.push(x);
            }
        }
    }
}
