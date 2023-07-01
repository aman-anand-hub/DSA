#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    //fastio
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        int count_0=0, count_1=0;
        string temp=s;
        sort(temp.begin(),temp.end());
        if(s==temp) cout<<0<<endl;
        else
        {
            for (int i = 0; i < n; i++)
            {
                if(s[i]=='0') count_0++;
                else count_1++;
            }
            vector<int> ans;
            for (int i = 0; i < count_0; i++)
            {
                if(s[i]=='1') ans.push_back(i+1); 
            }
            for (int i = count_0; i < n; i++)
            {
                if(s[i]=='0') ans.push_back(i+1);
            }
            cout<<1<<endl;
            cout<<ans.size()<<' ';
            for (int i = 0; i <ans.size(); i++)
            {
                cout<<ans[i]<<' ';
            }
            cout<<endl;
        }

    }
    return 0;
}