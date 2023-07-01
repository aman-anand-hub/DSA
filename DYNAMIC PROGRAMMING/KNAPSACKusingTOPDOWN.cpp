#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int knapsack(int n, int w, vector<int> &wt, vector<int> &val)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {
            if(i==0 || j==0) dp[i][j]=0;
            else if(wt[i-1]<=j)
            {
                dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
            }
            else if(wt[i-1]>w)
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][w];
}

int main()
{
    int n,w; cin>>n>>w;
    vector<int> wt(n);
    vector<int> val(n);
    for(int i=0;i<n;i++) cin>>wt[i];
    for(int i=0;i<n;i++) cin>>val[i];
    cout<<knapsack(n,w,wt,val);
}