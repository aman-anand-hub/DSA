#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int curr=0;
    int res=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(v[i]==0) curr=0;
        else
        {
            curr++;
            res=max(res,curr);
        }
    }
    cout<<res<<endl;
}