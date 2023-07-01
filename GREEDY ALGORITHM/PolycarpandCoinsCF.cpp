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
        if(n%3==0) cout<<(n/3)<<' '<<(n/3)<<endl;
        else if(n%3==1) cout<<(n/3)+1<<' '<<(n/3)<<endl;
        else if(n%3==2) cout<<(n/3)<<' '<<(n/3)+1<<endl;
    }
    return 0;
}