#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];

bool ispal(string s)
{
    int i=0,j=s.length()-1;
    while(i<j)
    {
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}


int func(string s,int l,int r)
{
    if(dp[l][r]!=-1)
        return dp[l][r];
    if(l==r+1)
        return 0;
    int ans=INT_MAX;
    for(int k=l;k<=r;k++)
    {
        string temp=s.substr(l,k-l+1);
        if(ispal(temp)==true)
        {
            ans=min(ans,1+func(s,k+1,r));
        }
    }  
   return dp[l][r]=ans;
}

int main()
{
    string s; cin>>s;
    memset(dp,-1,sizeof(dp));
    cout<<func(s,0,s.length()-1)-1<<endl;
}