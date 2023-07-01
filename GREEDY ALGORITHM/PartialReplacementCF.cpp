#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
void solve()
{
    int n,k; cin>>n>>k;
    string s; cin>>s;
    int total=0;
    if(n==1)
    {
        if(s[0]=='*') cout<<1<<endl;
        else cout<<0<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]=='*')
        {
            s[i]='x';
            total++;
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]=='*')
        {
            s[i]='x';
            total++;
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]=='.') continue;;
        if(s[i]=='x')
        {
            bool flag=false;
            for(int j=1;j<=k;j++)
            {
                if(i+j<n&&s[i+j]=='x')
                {
                    flag=true;
                    break;
                }
                else if(i+j>=n)
                {
                    flag=true;break;
                }
            }
            if(flag==false)
            {
                for(int j=i+k;j>i;j--)
                {
                    if(j<n&&s[j]=='*')
                    {
                        s[j]='x';
                        total++;
                        break;
                    }
                }
            }
        }
        
    }
    cout<<total<<endl;
}
int main()
{
    fastio
    int t; cin>>t;
    while(t--)
    {
        solve();
        //cout<<ans <<endl;   
    }
    return 0;
}
