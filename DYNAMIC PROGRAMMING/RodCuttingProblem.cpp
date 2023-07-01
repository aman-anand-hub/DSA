#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];

int RodCutting(int n, int len, vector<int> peice, vector<int>prof)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=len;j++)
        {
            if(i==0 || j==0) dp[i][j]=0;
            else if(peice[i-1]<=j)
            {
                dp[i][j]=max(prof[i-1]+dp[i][j-peice[i-1]],dp[i-1][j]);
            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][len];
}

int main()
{
    int n,len; cin>>n>>len;
    vector<int> peice(n);
    for(int i=0;i<n;i++) cin>>peice[i];
    vector<int> prof(n);
    for(int i=0;i<n;i++) cin>>prof[i];
    cout<<RodCutting(n,len,peice,prof)<<endl;
}