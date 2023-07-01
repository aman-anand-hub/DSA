#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    fastio
    int t; cin>>t;
    while (t--)
    {
        ll n; cin>>n;
        vector<pair<ll,ll>> v(n);
        for(ll i=0;i<n;i++)
        {
            ll x; cin>>x;
            v[i].first=x, v[i].second=i;
        }
        sort(v.rbegin(),v.rend());
        vector<ll> ans(n);
        ll res=0;
        ll mid= (n+2)/2;
        ll left=mid-1, right=mid+1;
        bool isleft=1;
        for (ll i = 0;i<n; i++)
        {
            ll idx=v[i].second;
            ll cnt=v[i].first;
            if(isleft)
            {
                ans[idx]=left;
                ll cost=2*(mid-left);
                res+=cnt*cost;
                left--;
                isleft=0;
            }
            else
            {
                ans[idx]=right;
                ll cost=2*(right-mid);
                res+=cnt*cost;
                right++;
                isleft=1;
            }
        }
        cout<<res<<endl;
        cout<<mid<<' ';
        for(int x:ans)
        {
            cout<<x<<' ';
        }
        cout<<endl;
    }
    return 0;
}












/*#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
int main()
{
    fastio
    int t; cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<pair<int,int>> v(n);
        for (int i=0;i<n;i++)
        {
            int x; cin>>x;
            v[i].first=x, v[i].second=i;
        }
        sort(v.rbegin(),v.rend());
        vector<int> ans(n);
        int mid=(n+2)/2;
        int left=mid-1,right=mid+1;
        int res=0;
        bool isleft=1;
        for (int i = 0; i<n; i++)
        {
            int idx=v[i].second;
            int cnt=v[i].first;
            if(isleft)
            {
                ans[idx]=left;
                int cost=2*(mid-left);
                res+=cnt*cost;
                left--;
                isleft=0;
            }
            else
            {
                ans[idx]=right;
                int cost= 2*(right-mid);
                res+=cnt*cost;
                right++;
                isleft=1;
            }
        }
        cout<<res<<endl;
        cout<<mid<<' ';
        for(int x:ans)
        {
            cout<<x<<' ';
        }
    }
    return 0;
}
*/