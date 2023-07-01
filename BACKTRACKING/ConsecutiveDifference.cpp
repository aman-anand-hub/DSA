#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int arr[1001][1001];
vector<vector<bool>> vis(1001,vector<bool>(1001,false));
int dfs(int n, int m, int i, int j)
{
    if(dp[i][j]!=-1) return dp[i][j];
    int X[]={1,-1,0,0};
    int Y[]={0,0,1,-1};
    int ans=INT_MIN;
    vis[i][j]=true;
    for(int k=0;k<4;k++)
    {
        int x=X[k]+i;
        int y=X[k]+j;
        if(x>=0 && y>=0 && x<n && y<m && (arr[x][y]==arr[i][j]+1) && !vis[x][y])
        {
            ans=max(ans,1+dfs(n,m,x,y));
        }
    }
    vis[i][j]=false;
    return dp[i][j]=ans;
}
int func(int n, int m)
{
    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            ans=max(ans,dfs(n,m,i,j));
        }
    }
    return ans;
}
int main()
{
    int n,m; cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;i<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    memset(dp,-1,sizeof(dp));
    cout<<func(n,m)<<endl;
}