#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int res=0;
int func(string s, int i, int len)
{
    if(dp[i][len-1]!=-1) return dp[i][len-1];
    if(i==len) return 1;
    int x=0,y=0;
    if(s[i]!='0') x=func(s,i+1,len);
    if(s[i]!='0' && (i+1<len) && 26>=(s[i]-'0')*10+(s[i+1]-'0')>=1)
    {
        y=func(s,i+2,len);
    }
    res=(x+y);
    return dp[x][y]=res;
}
int main()
{
    string s; cin>>s;
    int len=s.length();
    memset(dp,-1,sizeof(dp));
    cout<<func(s,0,len)<<endl;
}