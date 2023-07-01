#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    fastio
    int t; cin>>t;
    while(t--)
    {
        int a,b,c; cin>>a>>b>>c;
        int fora= max(b,c);
        int forb= max(a,c);
        int forc= max(a,b);
        if(fora>=a) cout<<fora-a+1<<' ';
        else cout<<0<<' ';
        if(forb>=b) cout<<forb-b+1<<' ';
        else cout<<0<<' ';
        if(forc>=c) cout<<forc-c+1<<' ';
        else cout<<0<<' ';
        cout<<endl;
    }
    return 0;
}