#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001];

bool subsetSum(int n, int sum, vector<int> &arr)
{
    for(int i=0;i<=n;i++) dp[i][0]=true;
    for(int i=1;i<=sum;i++) dp[0][i]=false;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(arr[i-1]<=j)
            {
                dp[i][j]=(dp[i-1][j-arr[i-1]] || dp[i-1][j]);
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
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    if(subsetSum(n,sum,arr)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}