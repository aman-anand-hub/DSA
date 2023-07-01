#include<bits/stdc++.h>
using namespace std;
bool dp[1001][1001];

int MinSubsetDiff(int n, vector<int> &arr)
{
    int range=0;
    for(int i=0;i<n;i++) range+=arr[i];
    for(int i=0;i<=n;i++) dp[i][0]=true;
    for(int i=1;i<=range;i++) dp[0][i]=false;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=range;j++)
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
    vector<int> poss;
    for(int i=0;i<=range/2;i++)
    {
        if(dp[n][i]==true) poss.push_back(i);
    }
    int mn=INT_MAX;
    for(int i=0;i<poss.size();i++)
    {
        mn=min(mn,range-2*poss[i]);
    }
    return mn;
}

int main()
{
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<MinSubsetDiff(n,arr)<<endl;
}