#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    fastio
    int t; cin>>t;
    while (t--)
    {
        int n,x; cin>>n>>x;
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        vector<int> b=a;
        sort(b.begin(), b.end());
        bool flag= true;
        for (int i = 0; i < n; i++)
        {
            if(a[i]==b[i]) continue;
            if(n-1-i>=x || i>=x) continue;
            flag= false;
            break;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;        
    }
    return 0;
}