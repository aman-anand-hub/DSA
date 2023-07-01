#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    fastio
    int t; cin>>t;
    while (t--)
    {
        int n,h; cin>>n>>h;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(), a.end());
        int ans=(h/(a[n-1]+a[n-2]));
        h-=ans*(a[n-1]+a[n-2]);
        ans=ans*2;
        if(h>a[n-1]) ans+=2;
        else if(h) ans++;
        cout<<ans<<endl;
    }
    return 0;
}