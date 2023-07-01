#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        if(n%2!=0 && s[n/2]!=s[(n/2)+1]) cout<<1<<endl;
        else
        {
            int count=1;
            if(n%2==0)
            {
                for(int i=n/2;i<n-1;i++)
                {
                    if(s[i]==s[i+1]) count++;
                    else break;
                }
                cout<<2*count<<endl;
            }
            else
            {
                for(int i=n/2;i<n-1;i++)
                {
                    if(s[i]==s[i+1]) count+=2;
                    else break;
                }
                cout<<count<<endl;
            }
        }
    }
}