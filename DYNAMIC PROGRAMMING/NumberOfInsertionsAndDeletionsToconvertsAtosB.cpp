#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];

void InserDel(string x, string y, int n, int m)
{
    for(int i=0;i<=n;i++) dp[i][0]=0;
    for(int i=1;i<=m;i++) dp[0][i]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(x[i-1]==y[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    cout<<"Insertions: "<<m-dp[n][m]<<endl;
    cout<<"Deletions: "<<n-dp[n][m]<<endl;
}

int main()
{
    string x,y; cin>>x>>y;
    InserDel(x,y,x.length(),y.length());
}