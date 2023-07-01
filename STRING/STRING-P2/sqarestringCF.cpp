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
        if(s.length()%2==0)
        {
            int i=0,j=s.length()/2;
            bool b=true;
            while(i<s.length()/2 && j<s.length())
            {
                if(s[i]!=s[j])
                {
                    b=false;
                    break;
                }
                i++; j++;
            }
            if(b) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}