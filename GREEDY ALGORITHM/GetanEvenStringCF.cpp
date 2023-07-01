#include<bits/stdc++.h>
using namespace std;

int dp[200005];
int solve(string &s, int i)
{
    if(i>=s.size()) return 0;
    if(dp[i]!=-1) return dp[i];
    if(i==s.size()-1) return 1;
    if(i<s.size()-1 && s[i]==s[i+1]) return solve(s,i+2);
    else
    {
        int j;
        for(j=i+1;j<s.size();j++)
        {
            if(s[i]==s[j]) break;
        }
        if(j==s.size()) return 1+solve(s,i+1);
        else
        {
            int c1= j-i-1+solve(s,j+1);
            int c2= 1+solve(s,i+1);
            return dp[i]=min(c1,c2);
        }
    }
}

signed main()
{
    int t; cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++) dp[i]=-1;
        int del=solve(s,0);
        cout<<del<<endl;
    }
    return 0;
}