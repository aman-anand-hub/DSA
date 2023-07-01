#include<bits/stdc++.h>
using namespace std;

int knapREC(vector<int> wt, vector<int> val, int W, int n)
{
    if(n==0 || W==0) return 0;
    if(wt[n-1]<=W)
    {
        return max((val[n-1]+knapREC(wt,val,W-wt[n-1],n-1)),knapREC(wt,val,W,n-1));
    }
    else if(wt[n-1]>W)
    {
        return knapREC(wt,val,W,n-1);
    }
}

int main()
{
    int n,W; cin>>n>>W;
    vector<int> wt(n);
    vector<int> val(n);
    for(int i=0;i<n;i++)
    {
        cin>>wt[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>val[i];
    }
    cout<<knapREC(wt,val,W,n)<<endl;
}