#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
int main()
{
    fastio 
    int t; cin>>t;
    while(t--)
    {
        int a,b; cin>>a>>b;
        int ans=(a+b)/4;
        ans=min(a,ans);
        ans=min(b,ans);
        cout<<ans<<endl;
    }
    return 0;
}