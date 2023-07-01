#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int CountSubsets(vector<int> &arr, int n, int sum)
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

int main()
{
    int n,sum; cin>>n>>sum;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<CountSubsets(v,n,sum)<<endl;
}