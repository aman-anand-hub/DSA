#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n,k; cin>>n>>k;
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++)
        {
            int x,y; cin>>x>>y;
            v.push_back({x,y});
        }
        priority_queue<pair<float,int>> mx;
        for(int i=0;i<n;i++)
        {
            int a=v[i].first,b=v[i].second;
            float dis= sqrt(a^2+b^2);
            mx.push({dis,i});
            if(mx.size()>k) mx.pop();
        }
        while(mx.size()>0)
        {
            int idx=mx.top().second;
            cout<<'{'<<v[idx].first<<','<<v[idx].second<<'}'<<' ';
            mx.pop();
        }
    }
    
}