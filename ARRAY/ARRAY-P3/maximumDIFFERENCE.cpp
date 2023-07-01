#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int ans=INT_MIN;
    int min_ele=v[0];
    for(int i=1;i<n;i++)
    {
        min_ele=min(min_ele,v[i]);
        ans=max(ans,v[i]-min_ele);
    }
    cout<<ans<<endl;
}