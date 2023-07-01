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
        string s; cin>>s;
        vector<bool> v(26);
        bool poss= true;
        v[s[0]-'A']=true;
        for(int i=1;i<n;i++)
        {
            if(s[i]==s[i-1])
            {
                continue;
            }
            else
            {
                if(v[s[i]-'A']==false)
                {
                    v[s[i]-'A']=true;
                }
                else 
                {
                    poss=false;
                    break;
                }
            }
        }
        if(poss) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}