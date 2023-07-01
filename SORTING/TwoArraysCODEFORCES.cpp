#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
signed main()
{
    fastio
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int> a(n),b(n);
        for (int i = 0; i <n; i++) cin>>a[i];
        for (int i = 0; i <n; i++) cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        bool ok= true;
        for (int i = 0; i <n; i++)
        {
            if((b[i]-a[i]==1) || (a[i]==b[i])) continue;
            else
            {
                ok=false;
                break;
            }
        }
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }   
}