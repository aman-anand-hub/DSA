#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastio
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int arr[n]; 
        for(int i=0;i<n;i++) cin>>arr[i];
        if(n>1)
        {
            sort(arr,arr+n);
            int cur=arr[0], res=arr[0];
            for (int i = 1; i < n; i++)
            {
                arr[i]=arr[i]-cur;
                cur=cur+arr[i];
                res=max(res,arr[i]);
            }
            cout<<res<<endl;
        }
        else
        {
            cout<<arr[0]<<endl;
        }
    }
    return 0;
}