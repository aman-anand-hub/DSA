#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        string s,s_copy; cin>>s;
        s_copy=s;
        sort(s_copy.begin(), s_copy.end());
        int count=0;
        for (int i = 0; i <s.length(); i++)
        {
            if(s[i]==s_copy[i])
            {
                count++;
            }
        }
        cout<<s.length()-count<<endl;
    }
    return 0;
}