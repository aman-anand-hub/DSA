#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int gtl[n],gtr[n];
        gtl[0]=a[0];
        gtr[n-1]=a[n-1];
        for(int i=1;i<n;i++)
        {
            gtl[i]=max(gtl[i-1],a[i]);
        }
        for(int i=n-2;i>=0;i--)
        {
            gtr[i]=max(gtr[i+1],a[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=min(gtl[i],gtr[i])-a[i];
        }
        cout<<ans<<endl;
    }
}