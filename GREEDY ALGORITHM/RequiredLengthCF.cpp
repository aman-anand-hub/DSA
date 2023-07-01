#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,x; cin>>n>>x;
    map<long long, long long> mp;
    queue<long long> q;
    q.push(x);
    while(!q.empty())
    {
        long long ele=q.front();
        q.pop();
        string s=to_string(ele);
        if(s.length()>=n)
        {
            cout<<mp[ele]<<endl;
            return;
        }
        for(auto it:s)
        {
            it-='0';
            if(it<=1 || mp[ele*it]) continue;
            mp[ele*it]=mp[ele]+1;
            q.push(ele*it);
        }
    }
    cout<<-1<<endl;
}

int main()
{
    solve();
}