#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
//const ll N=1e9+10;
//vector<bool> v(N);
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int x=n;
        int count=0;
        if(x<10)
        {
            cout<<x<<endl;
            //continue;
        }
        else
        {
            int firstdiv=0;
            while(x>0)
            {
                x/=10;
                count++;
            }
            while(count>0)
            {
                firstdiv=firstdiv*10+1;
                count--;
            }
            int sum=0;
            if(firstdiv<=n) sum+=n/firstdiv;
            firstdiv/=10;
            while(firstdiv>0)
            {
                sum+=9;
                firstdiv/=10;
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}