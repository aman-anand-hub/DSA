#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        priority_queue<int> mx;
        for(int i=0;i<n;i++)
        {
            mx.push(v[i]);
            if(mx.size()>2) mx.pop();
        }
        cout<<mx.top()<<' ';
        mx.pop();
        cout<<mx.top()<<' ';
        mx.pop();
    }
}