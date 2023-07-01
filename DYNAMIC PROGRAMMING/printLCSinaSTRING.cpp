#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];

string LCS(string x, int n)
{
    for(int i=0;i<=n;i++)
    {
        dp[i][0]=0;
        dp[0][i]=0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(x[i-1]==x[j-1] && i!=j)
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    int i=n,j=n;
    string ans="";
    while(i>0 && j>0)
    {
        if(dp[i][j]==dp[i-1][j-1]+1)
        {
            ans+=x[i-1];
            i--;j--;
        }
        else
        {
            if(dp[i][j]==dp[i-1][j]) i--;
            else j--;
        }
    }
    /*int a=0, b=ans.length()-1;
    while(a<=b)
    {
        swap(ans[a],ans[b]);
        a++;b--;
    }
    return ans;
    */
    reverse(ans.begin(),ans.end()); 
    return ans;
} 

int main()
{
    string s; cin>>s;
    cout<<LCS(s,s.length())<<endl;
}
