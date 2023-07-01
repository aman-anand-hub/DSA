#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];

int TargetSum(int n, int diff, vector<int> &arr)
{
    int range=0;
    for(int i=0;i<n;i++) range+=arr[i];
    int sum=(range+diff)/2;
    if((range+diff)%2!=0) return 0;
    else
    {
        for(int i=0;i<=n;i++) dp[i][0]=1;
        for(int i=1;i<=sum;i++) dp[0][i]=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                if(arr[i-1]<=j)
                {
                    dp[i][j]=dp[i-1][j-arr[i-1]]+dp[i-1][j];
                }
                else if(arr[i-1]>j)
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
    }
}