#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2, MOD=1e9+7; 
vector<int> adj[N];
signed main()
{
    //Adjacency matrix
    int n,m;// n->number of nodes and m->number of edges
    cin>>n>>m;
    vector<vector<int>> adj(n+1,vector<int>(n+1,0));
    for (int i = 0; i < m; i++)
    {
        int x,y; cin>>x>>y;
        adj[x][y]=1;
        adj[y][x]=1;
    }
    cout<<"adjacency matrix of above graph is given by: "<<endl;
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < n+1; j++)
        {
            cout<<adj[i][j]<<' ';
        }
        cout<<endl;
    }
    // check whether a element is present or not
    cout<<"enter two nodes to check the presence of edge between them: "<<endl;
    int k,l; cin>>k>>l;
    if(adj[k][l]==1) cout<<"edge is present between "<<k<<" and "<<l<<endl;
    else cout<<"no edge exits between the two nodes"<<endl;
    //Adjacency list
    
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(y);
    }
    cout<<"adjacency list of the graph is given by: "<<endl;
    for(int i=1;i<n+1;i++)
    {
        cout<<i<<"->";
        for (int x: adj[i])
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}