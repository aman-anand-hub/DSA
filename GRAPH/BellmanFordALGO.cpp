#include<bits/stdc++.h>
using namespace std;

struct cell
{
    int v;
    int val;
};

class mycmp
{
    public:
    bool operator()(struct cell &p1, struct cell &p2)
    {
        return p1.val>p2.val;
    }
};

vector<int> Dijkstra(vector<pair<int,int>> adj[], int n)
{
    vector<bool> vis(n,false);
    vector<int> ans(n);
    priority_queue<cell,vector<cell>,mycmp> pq;
    pq.push({0,0});
    while (!pq.empty())
    {
        cell k=pq.top();
        pq.pop();
        int s=k.v;
        int val=k.val;
        if(vis[s]) continue;
        ans[s]=val;
        vis[s]=true;
        for(auto x:adj[s])
        {
            if(!vis[x.first])
            {
                pq.push({x.first,val+x.second});
            }
        }
    }
    return ans;
}

int main()
{
    vector<pair<int,int>> adj[4];
    adj[0].push_back({1,1});
    adj[0].push_back({2,4});
    adj[1].push_back({2,-3});
    adj[1].push_back({3,2});
    adj[2].push_back({3,3});
    vector<int> ans=Dijkstra(adj,4);
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<' ';
    cout<<endl;
}