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
        int n; cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        ll p1=INT_MIN;
        ll p2=INT_MIN;
        for(int i=0;i<n;i++)
        {
            ll k1= min(a[i],b[i]);
            ll k2= max(a[i],b[i]);
            p1= max(p1, k1);
            p2= max(p2, k2);
        }
        cout<<p1*p2<<endl;
    }
    return 0;
}