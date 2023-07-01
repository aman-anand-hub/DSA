#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
int pref[200005][31];
ll N=2e5+5;
int main()
{
    fastio
    for (int i=1;i<N;i++)
    {
        for (int j=0;j<31;j++)
        {
            if(i&(1<<j)) pref[i][j]=1;
            pref[i][j]+=pref[i-1][j];
        }
    }
    int t; cin>>t;
    while (t--)
    {
        int l,r; cin>>l>>r;
        ll total=r-l+1;
        ll ans=1e10;
        for (int j= 0;j<31;j++)
        {
            ll curr= (pref[r][j]-pref[l-1][j]);\
            ans=min(ans,total-curr);
        }
        cout<<ans<<endl;
    }
    return 0;
}