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
        stack<int> s;
        for(int i=n-1;i>=0;i--)
        {
            if(s.size()==0)
            {
                ans.push_back(-1);
            }
            else if(s.size()>0 && v[i]>s.top())
            {
                ans.push_back(s.top());
            }
            else if(s.size()>0 && v[i]<=s.top())
            {
                while(s.size()>0 && v[i]<=s.top())
                {
                    s.pop();
                }
                if(s.size()==0)
                {
                    ans.push_back(-1);
                }
                else 
                {
                    ans.push_back(s.top());
                }
            }
            s.push(v[i]);
        }
        cout<<endl;
        for(int i=ans.size()-1;i>=0;i--) cout<<ans[i]<<' ';
    }
}