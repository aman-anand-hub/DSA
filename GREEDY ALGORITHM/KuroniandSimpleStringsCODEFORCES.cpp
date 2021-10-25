#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin>>s;
    int n= s.length();
    int i=0, j=n-1;
    vector<int> ans;
    while (i<j)
    {
        if(s[i]=='(')
        {
            if(s[j]==')')
            {
                ans.push_back(i);
                ans.push_back(j);
                i++, j--;
            }
            else
            {
                j--;
            }
        }
        else
        {
            i++;
        }
    }
    if(ans.size()>0)
    {
        cout<<1<<endl;
        cout<<ans.size()<<endl;
        sort(ans.begin(), ans.end());
        for(auto x: ans) cout<<x+1<<' ';
        cout<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
    return 0;
}