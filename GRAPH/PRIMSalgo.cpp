#include<bits/stdc++.h>
using namespace std;

struct cell
{
    int u;
    int value;
};

class mycmp
{
    public:
    bool operator()(struct cell &p1, struct cell &p2)
    {
        return p1.value>p2.value;
    }
};

int prims(vector<pair<int,int>> adj[], int n)
{
    vector<bool> vis(n,false);
    priority_queue<cell, vector<cell>, mycmp> pq;
    pq.push({0,0});
    int res=0;
    while(!pq.empty())
    {
        cell k=pq.top();
        pq.pop();
        int s=k.u;
        int val=k.value;
        if(vis[s]) continue;
        res+=val;
        vis[s]=true;
        for(auto x:adj[s])
        {
            if(!vis[x.first])
            {
                pq.push({x.first,x.second});
            }
        }
    }
    return res;
}

int main()
{
    
    vector<pair<int,int>> adj[5];
    adj[0].push_back({1,4});
    adj[0].push_back({2,5});
    adj[1].push_back({0,4});
    adj[1].push_back({3,11});
    adj[1].push_back({2,6});
    adj[2].push_back({0,5});
    adj[2].push_back({4,4});
    adj[2].push_back({1,6});
    adj[2].push_back({3,3});
    adj[3].push_back({1,11});
    adj[3].push_back({4,9});
    adj[3].push_back({2,3});
    adj[4].push_back({2,4});
    adj[4].push_back({3,9});
    cout<<prims(adj,5)<<endl;

    /*
    int n; cin>>n; //number of nodes
    
    //int s; cin>>s; //source vertex
    // there is no need of source vertex in prims algorithm
    
    int e; cin>>e; //number of edges
    for(int i=0;i<e;i++)
    {
        int u,v,x;
        cin>>u>>v>>x;
        adj[u].push_back({v,x});
    } */
}