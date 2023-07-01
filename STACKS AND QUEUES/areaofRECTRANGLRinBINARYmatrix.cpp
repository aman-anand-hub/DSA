#include<bits/stdc++.h>
using namespace std;
int MAH(vector<int> v)
{
    int n=v.size();
    vector<int> ntl,ntr;
    stack<pair<int,int>> s1,s2;
    for(int i=0;i<n;i++)
    {
        if(s1.size()==0) ntl.push_back(-1);
        else if(s1.size()>0 && s1.top().first<v[i])
        {
            ntl.push_back(s1.top().second);
        }
        else if(s1.size()>0 && s1.top().first>v[i])
        {
            while(s1.size()>0 && s1.top().first>v[i])
            {
                s1.pop();
            }
            if(s1.size()==0) ntl.push_back(-1);
            else ntl.push_back(s1.top().second);
        }
        s1.push({v[i],i});
    }
    for(int i=n-1;i>=0;i--)
    {
        if(s2.size()==0) ntr.push_back(n);
        else if(s2.size()==0 && s2.top().first<v[i])
        {
            ntr.push_back(s2.top().second);
        }
        else if(s2.size()>0 && s2.top().first>v[i])
        {
            while(s2.size()>0 && s2.top().first>v[i])
            {
                s2.pop();
            }
            if(s2.size()==0) ntr.push_back(n);
            else ntr.push_back(s2.top().second);
        }
        s2.push({v[i],i});
    }
    reverse(ntr.begin(),ntr.end());
    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int dif=ntr[i]-ntl[i]-1;
        ans=max(ans,v[i]*dif);
    }
    return ans;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m; cin>>n>>m;
        vector<vector<int>> v;
        for(int i=0;i<n;i++)
        {
            vector<int> temp;
            for(int j=0;j<m;j++)
            {
                int x; cin>>x;
                temp.push_back(x);
            }
            v.push_back(temp);
        }
        vector<int> d;
        for(int i=0;i<m;i++) d[i]=v[0][i];
        int ans=INT_MIN;
        ans=max(ans,MAH(d));
        for(int i=1;i<n;i++)
        {
            vector<int> t=v[i];
            for(int j=0;i<m;j++)
            {
                if(t[i]==0) d[i]=0;
                else d[i]+=t[i];
            }
            ans=max(ans,MAH(d));
        }
        cout<<ans<<endl; 
    }
}