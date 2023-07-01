#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        priority_queue<int,vector<int>,greater<int>> mn;
        for(int i=0;i<n;i++)
        {
            mn.push(v[i]);
            if(mn.size()>k)
            {
                cout<<mn.top()<<' ';
                mn.pop();
            }
        }
        while(mn.size()>0)
        {
            cout<<mn.top()<<' ';
            mn.pop();
        }
    }
}