#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int k,n,m;
    cin>>k>>n>>m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    vector<int> ans;
    int p1=0, p2=0;
    for (int i = 0; i < n+m; i++)
    {
        if(p1<n && a[p1]<=k)
        {
            if(a[p1]==0)
            {
                k++;
            }
            ans.push_back(a[p1]);
            p1++;
        }
        else
        {
            if(p2<m && b[p2]<=k)
            {
                if(b[p2]==0)
                {
                    k++;
                }
                ans.push_back(b[p2]);
                p2++;
            }
            else
            {
                cout<<"-1"<<endl;
                return;
            }
        }
    }
    for (int i = 0; i < n+m; i++)
    {
        cout<<ans[i]<<' ';
    }
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
}