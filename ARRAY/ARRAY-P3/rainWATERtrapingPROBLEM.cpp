#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int v[n];
    for(int i=0;i<n;i++) cin>>v[i];
    int lmax[n],rmax[n];
    for(int i=0;i<n;i++)
    {
        if(i==0) lmax[i]=v[0];
        lmax[i]=max(v[i],lmax[i-1]);
    }
    rmax[n-1]=v[n-1];
    for(int i=n-2;i>=0;i--)
    {
        rmax[i]=max(v[i],rmax[i+1]);
    }
    for(int x:rmax) cout<<x<<' '; cout<<endl;
    int ans=0;
    for(int i=0;i<n-1;i++)
    {
        ans+=min(lmax[i],rmax[i])-v[i];
    }
    cout<<ans<<endl;
}