#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> v, int start, int end)
{
    if(start>=end) return 0;
    int profit=0;
    for(int i=start;i<end;i++)
    {
        for(int j=i+1;j<=end;j++)
        {
            if(v[j]>v[i])
            {
                int curr_profit=v[j]-v[i]+maxProfit(v,start,i-1)+maxProfit(v,j+1,end);
                profit=max(profit,curr_profit);
            }
        }
    }
    return profit;
}

int main()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<maxProfit(v, 0, n-1)<<endl;
}