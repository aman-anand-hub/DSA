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
        int n; cin>>n;
        for(int i=1;i<=n;i++)
        {
            cout<<i<<' ';
            for(int j=n;j>0;j--)
            {
                if(i!=j)
                {
                    cout<<j<<' ';
                }
            }
            cout<<endl;
        }    
    }
    return 0;
}