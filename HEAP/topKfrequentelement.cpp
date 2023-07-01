#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n,k; cin>>n>>k;
        vector<int> v;
        unordered_map<int,int> map;
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            v.push_back(x);
            map[x]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> mn;
        for(auto it:map)
        {
            mn.push({it.second,it.first});
            if(mn.size()>k) mn.pop();
        }
        while(mn.size()>0)
        {
            cout<<mn.top().second<<' ';
            mn.pop();
        }
    }
    
}