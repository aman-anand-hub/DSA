#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];

int minInsertion(string x, int n)
{
    string y=x;
    reverse(y.begin(),y.end());
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
    return n-dp[n][n];
}

int main()
{
    string x; cin>>x;
    cout<<minInsertion(x,x.length())<<endl;
}