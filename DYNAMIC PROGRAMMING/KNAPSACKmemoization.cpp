#include<bits/stdc++.h>
using namespace std;

int dp[1002][1002];

int knapsack(int n,int w, vector<int> &wt, vector<int> &val)
{
    if(dp[n][w]!=-1) return dp[n][w];
    if(n==0 || w==0) return dp[n][w]=0;
    if(wt[n-1]<=w)
    {
        return dp[n][w]=max(val[n-1]+knapsack(n-1,w-wt[n-1],wt,val),knapsack(n-1,w,wt,val));
    }
    else
    {
        return dp[n][w]=knapsack(n-1,w,wt,val);
    }
}

int main()
{
    int n,w; cin>>n>>w;
    vector<int> wt(n+1);
    vector<int> val(n+1);
    for(int i=0;i<n;i++) cin>>wt[i];
    for(int i=0;i<n;i++) cin>>val[i];
    for(int i=0;i<1002;i++)
    {
        for(int j=0;j<1002;j++) dp[i][j]=-1;
    }
    cout<<knapsack(n,w,wt,val)<<endl;
}