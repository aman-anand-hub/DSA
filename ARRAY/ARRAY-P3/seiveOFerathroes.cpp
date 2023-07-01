#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> vis(n,false);
    for(int i=2;i*i<=n;i++)
    {
        if(!vis[i])
        {
            for(int j=i*i;j<=n;j+=i)
            {
                vis[j]=true;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(!vis[i]) cout<<i<<' ';
    }
}