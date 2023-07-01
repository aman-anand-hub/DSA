#include<bits/stdc++.h>
using namespace std;
int addDigits(int n)
{
    int ans=0;
    while(n>0)
    {
        ans+=n%10;
        n/=10;
    }
    return ans;
}
int func(vector<int> v, int n)
{
    unordered_map<int,int> map;
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        int sum_Digit=addDigits(v[i]);
        if(map.find(sum_Digit)!=map.end())
        {
            int idx=map[sum_Digit];
            ans=max(ans,v[i]+v[idx]);
            if(v[idx]<v[i])
            {
                map[sum_Digit]=i;
            }
        }
        else map[sum_Digit]=i;
    }
    return ans;
}
int main()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<func(v,n)<<endl;
}