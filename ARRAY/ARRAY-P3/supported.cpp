/*
#include<bits/stdc++.h>
using namespace std;
int func(vector<int> v, int n)
{
    int sum=0;
    for(int i=0;i<n;i++) sum+=v[i];
    bool dp[n+1][sum=1];
    for(int i=0;i<=n;i++) dp[i][0]=true;
    for(int i=1;i<=sum;i++) dp[0][i]=false;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(v[i-1]<=j)
            {
                dp[i][j]=dp[i-1][j-v[i-1]] || dp[i-1][j];
            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    vector<int> poss_sum;
    for(int i=0;i<=sum/2;i++)
    {
        if(dp[n][i]==true) poss_sum.push_back(i);
    }
    int ans=INT_MAX;
    for(int i=0;i<poss_sum.size();i++)
    {
        ans=min(ans,sum-2*poss_sum[i]);
    }
    return ans;
}
int main()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<func(v,n)<<endl;
} */
#include<bits/stdc++.h>
using namespace std;
float StandardDeviation(int arr[], int n)
{
    int sum=0;
    for(int i=0;i<n;i++) sum+=arr[i];
    int mean=sum/n;
    int sd=0;
    for(int i=0;i<n;i++) sd+=(arr[i]-mean)*(arr[i]-mean);
    sd/=n;
    return sqrt(sd);
}
int func(int n)
{
    if(n==0) return 0;
    return func(n-1)+(2*n+(n-1));
}
int givenfuncname(int n)
{
    int ans=func(n);
    return ans%1000007;
}
int main()
{
    int n; cin>>n;
    //int arr[n];
    //for(int i=0;i<n;i++) cin>>arr[i];
    //cout<<StandardDeviation(arr,n)<<endl;
    cout<<func(n);

}