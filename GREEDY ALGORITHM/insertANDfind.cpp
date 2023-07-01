#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    unordered_map<string,int> mp;
    for(int i=0;i<n;i++)
    {
        string initial;
        cin>>initial;
        if(initial=="add")
        {
            string s; cin>>s;
            for(int i=0;i<22;i++)
            {
                if(i<s.length())
                {
                    mp[s.substr(0,i)]++;
                }
            }
        }
        else if(initial=="find")
        {
            string subs; cin>>subs;
            int ans=mp[subs];
            cout<<ans<<endl;
        }
    }
}