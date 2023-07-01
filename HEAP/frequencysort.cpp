#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v;
        unordered_map<int,int> map;
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            v.push_back(x);
            map[x]++;
        }
        priority_queue<pair<int,int>> mx;
        for(auto it:map)
        {
            mx.push({it.second,it.first});
        }
        while(mx.size()>0)
        {
            int freq=mx.top().first;
            int ele=mx.top().second;
            for(int i=0;i<freq;i++) cout<<ele<<' ';
            mx.pop();
        }
    }
}