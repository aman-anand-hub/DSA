#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    fastio
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        int n= s.length();
        int ans=n;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int num= (s[i]-'0')*10+(s[j]-'0');
                if(num%25==0)
                {
                    ans=min(ans,(j-i-1)+(n-j-1));
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}