#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int denm=5;
    int ans=0;
    while(denm<=n)
    {
        ans+=n/denm;
        denm*=5;
    } 
    cout<<ans<<endl;
}