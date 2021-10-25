#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++) cin>>arr[i];
    int l= n-arr[n]; // range of last element
    int ans=1;// last person will always be alive
    for(int i=n-1;i>=1;i--)
    {
        if(i<l)
        {
            ans++;
        }
        l= min(l, i-arr[i]);
    }
    cout<<ans<<endl;
}