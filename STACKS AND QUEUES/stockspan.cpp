#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        vector<int> ans;
        stack<pair<int,int>> s;
        for(int i=0;i<n;i++)
        {
            if(s.size()==0) ans.push_back(-1);
            else if(s.size()>0 && s.top().first>v[i]) ans.push_back(s.top().second);
            else if(s.size()>0 && s.top().first<v[i])
            {
                while(s.size()>0 && s.top().first<v[i])
                {
                    s.pop();
                }
                if(s.size()==0) ans.push_back(-1);
                else ans.push_back(s.top().second);
            }
            s.push({v[i],i});
        }
        int mx=INT_MIN;
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]==-1) continue;
            mx=max(mx,i-ans[i]);
        }
        cout<<mx<<endl;
    }
}