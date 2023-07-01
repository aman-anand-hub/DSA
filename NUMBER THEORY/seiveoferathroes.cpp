#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<bool> vis(n+1,true);
    for(int i=2;i*i<=n;i++)
    {
        if(vis[i])
        {
            for(int j=i*i;j<=n;j+=i)
            {
                vis[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(vis[i]) cout<<i<<' '; 
    }
    cout<<endl;
}