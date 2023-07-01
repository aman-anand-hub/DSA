#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];

int CountMin(vector<int> &coins, int n, int sum)
{
    // initializing 1st row
    for(int i=0;i<=sum;i++) dp[0][i]=INT_MAX-1;
    // initializing 1st coloum
    for(int i=1;i<=n;i++) dp[i][0]=0;
    // initializing 2nd row
    for(int i=1;i<=sum;i++)
    {
        if(i%coins[0]==0) dp[1][i]=i/coins[0];
        else dp[1][i]=INT_MAX-1;
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(coins[i-1]<=j)
            {
                dp[i][j]=min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
            }
            else if(coins[i-1]>j)
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][sum];
}

int main()
{
    int n,sum; cin>>n>>sum;
    vector<int> coins(n);
    for(int i=0;i<n;i++) cin>>coins[i];
    cout<<CountMin(coins,n,sum)<<endl;
}