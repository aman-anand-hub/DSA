#include<bits/stdc++.h>
using namespace std;
#define fastion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
int main()
{
    fastion
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            v[i]=x;
        }
        sort(v.begin(),v.end());
        int ans= v[n-1]-v[0];
        cout<<ans<<endl;
    }
    return 0;
}
