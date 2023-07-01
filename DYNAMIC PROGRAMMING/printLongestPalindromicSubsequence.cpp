#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];

string PrintLPS(string x, int n)
{
    string y=x;
    reverse(y.begin(),y.end());
    for(int i=0;i<=n;i++)
    {
        dp[0][i]=0;
        dp[i][0]=0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(x[i-1]==y[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    string ans="";
    int i=n, j=n;
    while(i>0 && j>0)
    {
        if(x[i-1]==y[j-1])
        {
            ans+=x[i-1];
            i--;j--;
        }
        else
        {
            if(dp[i][j]==dp[i-1][j]) i--;
            else j--;
        }
    }
    //reverse(ans.begin(),ans.end());
    // no need to reverse coz its already palindrome
    return ans;
}

int main()
{
    string s; cin>>s;
    cout<<PrintLPS(s,s.length())<<endl;
}