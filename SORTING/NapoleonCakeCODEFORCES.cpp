#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
int main()
{
    fastio
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int> v(n),ans(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int t=v[n-1];
        for(int i=n-1;i>=0;i--)
        {
            if(t!=0||v[i]!=0)
            {
                ans[i]=1;
                t=max(t,v[i]);
                t--;
            }
            else
            {
                t=v[i];
            }
        }
        for(int x:ans) cout<<x<<' ';
        cout<<endl;
    }
    return 0;
} 