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

vector<int> Dijkstra(vector<pair<int,int>> adj[], int n)
{
    vector<bool> vis(n,false);
    vector<int> dist(n,INT_MAX);
    priority_queue<cell,vector<cell>,mycmp> pq;
    pq.push({0,0});
    dist[0]=0;
    while(!pq.empty())
    {
        cell k=pq.top();
        pq.pop();
        int s=k.u;
        int val=k.value;
        if(vis[s]) continue;
        vis[s]=true;
        dist[s]=val;
        for(auto x:adj[s])
        {
            if(!vis[x.first])
            {
                pq.push({x.first,val+x.second});
            }
        }
    }
    return dist;
}

int main()
{
    vector<pair<int,int>> adj[5];
    adj[0].push_back({1,1});
    adj[0].push_back({2,2});
    adj[1].push_back({0,1});
    adj[1].push_back({2,5});
    adj[1].push_back({4,3});
    adj[2].push_back({1,5});
    adj[2].push_back({0,2});
    adj[2].push_back({3,7});
    adj[3].push_back({4,2});
    adj[3].push_back({2,7});
    adj[4].push_back({1,3});
    adj[4].push_back({3,2});
    vector<int> ans=Dijkstra(adj,5);
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<' ';
    cout<<endl;
}