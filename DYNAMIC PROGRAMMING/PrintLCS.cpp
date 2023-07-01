#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];

string printLCS(string x, string y, int n, int m)
{
    for(int i=0;i<=m;i++) dp[0][i]=0;
    for(int i=1;i<=n;i++) dp[i][0]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(x[i-1]==y[j-1]) dp[i][j]=1+dp[i-1][j-1];
            else if(x[i-1]!=y[j-1])
            {
                dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    string ans;
    int i=n, j=m;
    while(i>0 && j>0)
    {
        if(x[i-1]==y[j-1])
        {
            ans=ans+x[i-1];
            i--;j--;
        }
        else
        {
            if(dp[i][j-1]>dp[i-1][j])
            {
                j--;
            }
            else
            {
                i--;
            }
        }
    } 
    int a=0,b=ans.length()-1;
    while(a<=b)
    {
        swap(ans[a],ans[b]);
        a++;b--;
    }
    return ans;
}

int main()
{
    string x,y; cin>>x>>y;
    cout<<printLCS(x,y,x.length(),y.length())<<endl;
}