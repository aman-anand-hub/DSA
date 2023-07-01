#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];

int LPS(string x, int n)
{
    string y=x;
    reverse(y.begin(),y.end());
    for(int i=0;i<=n;i++)
    {
        dp[i][0]=0;
        dp[0][i]=0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(x[i-1]==y[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[n][n];
}

int main()
{
    string x; cin>>x;
    cout<<LPS(x,x.length())<<endl;
}