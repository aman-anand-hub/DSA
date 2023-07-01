#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        ll x,n; cin>>x>>n;
        if(x%2==0)
        {
            if(n%4==0) cout<<x<<endl;
            else if(n%4==3) cout<<x+n+1<<endl;
            else if(n%4==2) cout<<x+1<<endl;
            else cout<<x-n<<endl;   
        }
        else
        {
            if(n%4==0) cout<<x<<endl;
            else if(n%4==3) cout<<x-n-1<<endl;
            else if(n%4==2) cout<<x-1<<endl;
            else cout<<x+n<<endl;
        }
    }
}