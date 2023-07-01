#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
int main()
{
    fastio
    int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
        int arr[n]; 
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
        int j=n-1, i=n-1-k;
        int sum=0;
        int temp_k=k;
        while(temp_k)
        {
            sum+=(arr[i]/arr[j]);
            i--,j--,temp_k--;
        }
        for(int i=0;i<n-2*k;i++) sum+=arr[i];
        cout<<sum<<endl;
    }
}