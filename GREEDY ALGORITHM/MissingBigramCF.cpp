#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
int main()
{
    fastio
    int t;cin>>t;
    while (t--)
    {
        int n; cin>>n;
        string s,a;
        cin>>s;
        for(int i=1;i<=n-3;i++)
        {
            cin>>a;
            if(s[s.size()-1]== a[0]) s+=a[1];
            else s+=a;
        }
        if(s.size()<n) s+='b';
        cout<<s<<endl;
    }
    return 0;
}