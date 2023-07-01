#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k,x; cin>>n>>k>>x;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        priority_queue<pair<int,int>> mx;
        for(int i=0;i<n;i++)
        {
            mx.push({abs(v[i]-x),i});
            if(mx.size()>k) mx.pop();
        }
        while(mx.size()>0)
        {
            cout<<v[mx.top().second]<<' ';
            mx.pop();
        }
    }
}