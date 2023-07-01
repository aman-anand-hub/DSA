#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        int ans=0;
        bool final= true;
        while(1)
        {
            int i=1;
            bool flag=true;
            while(i<n)
            {
                if(v[i]==0 && v[i-1]==0)
                {
                    final=false;
                    break;
                }
                if(v[i-1]>=v[i])
                {
                    ans++;
                    v[i-1]/=2;
                    flag=false;
                    break;
                }
                i++;
            }
            if(flag) break;
        }
        if(final==false) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}