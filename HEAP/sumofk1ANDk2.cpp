#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k1,k2; cin>>n>>k1>>k2; //k1>k2
        vector<int> v;
        priority_queue<int,vector<int>,greater<int>> mn1,mn2;
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            v.push_back(x);
        }
        for(int i=0;i<n;i++)
        {
            mn1.push(v[i]);  
            mn2.push(v[i]);
            if(mn1.size()>k1) mn1.pop();
            if(mn2.size()>k2) mn2.pop();
        }
        int a=mn1.top(),b=mn2.top();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(a<v[i]&&b>v[i]) sum+=v[i];
        }
        cout<<sum<<endl;
    }
}