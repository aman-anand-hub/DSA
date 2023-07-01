#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
int main()
{
    fastio
    int t; cin>>t;
    while (t--)
    {
        int brr[7];
        for(int i=0;i<7;i++) cin>>brr[i];
        int a=brr[0];int  b=brr[1];int c=brr[6]-(brr[0]+brr[1]);
        cout<<a<<' '<<b<<' '<<c<<endl; 
    }
    return 0;
}