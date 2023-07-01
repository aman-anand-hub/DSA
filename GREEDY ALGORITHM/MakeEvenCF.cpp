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
        bool ok=0,first_digit=0;
        int num=n;
        while (num>0)
        {
            int d=num%10;
            if(d%2==0)
            {
                ok=1;
                if(num<10 && d%2==0)
                {
                    first_digit=1;
                }
            }
            num/=10;
        }
        if(ok)
        {
            if(n%2==0) cout<<0<<endl;
            else if(first_digit) cout<<1<<endl;
            else cout<<2<<endl;
        }
        else cout<<-1<<endl;
    }
    return 0;
}