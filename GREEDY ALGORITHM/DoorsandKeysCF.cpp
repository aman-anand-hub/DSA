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
        string s; cin>>s;
        int n=s.length();
        vector<bool> v(3);
        bool poss=true;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='r') v[0]=true;
            else if(s[i]=='b') v[1]=true;
            else if(s[i]=='g') v[2]=true;
            else if(s[i]=='R'&&v[0]==true) continue;
            else if(s[i]=='B'&&v[1]==true) continue;
            else if(s[i]=='G'&&v[2]==true) continue;
            else
            {
                poss=false;
                break;
            }
        }
        if(poss) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}