#include<bits/stdc++.h>
using namespace std;

bool dp[1001][1001];

bool EqualSubset(vector<int> &arr, int n, int sum)
{
    if(sum%2!=0) return false;
    else
    {
        sum/=2;
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
}

int main()
{
    int n; cin>>n;
    int sum=0;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(EqualSubset(arr,n,sum)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}