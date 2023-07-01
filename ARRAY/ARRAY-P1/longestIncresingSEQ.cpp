#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int curr=1;
    int i=0;
    int ans1=0;
    // iterating from the front
    while(i<n-1)
    {
        if(v[i]<v[i+1])
        {
            curr++;
            i++;
            continue;
        }
        ans1=max(ans1,curr);
        curr=1;
        i++;
    }
    if(curr!=0) ans1=max(ans1,curr);
    // iterating from back
    i=n-1;
    curr=1;
    int ans2=0;
    while(i>0)
    {
        if(v[i]<v[i-1])
        {
            curr++;
            i--;
            continue;
        }
        ans2=max(ans2,curr);
        curr=1;
        i--;
    }
    int ans=max(ans1,ans2);
    cout<<ans<<endl;
}