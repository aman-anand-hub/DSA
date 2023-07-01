#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        int ans= 1e9;
        for (int i = 'a'; i <='z'; i++)
        {
            int change=0,l=0,h=n-1;
            while (l<=h)
            {
                if(s[l]!=s[h])
                {
                    if(s[l]==i)
                    {
                        l++,change++;
                    }
                    else if(s[h]==i)
                    {
                        h--,change++;
                    }
                    else
                    {
                        change=1e9; break;
                    }
                }
                else
                {
                    l++;h--;
                }
            }
            ans= min(ans,change);
        }
        if(ans==1e9)cout<<-1<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}