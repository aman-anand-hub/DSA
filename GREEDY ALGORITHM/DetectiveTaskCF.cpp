#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        int zero=0,one=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                zero=i+1;
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                one=i+1;
            }
        }
        if(one==0 && zero==0) cout<<n<<endl;
        else if(one==0) cout<<zero<<endl;
        else if(zero==0) cout<<n-one+1<<endl;
        else cout<<abs(zero-one)+1<<endl;
    }
    return 0;
}