#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fl(i,n) for(int i=0;i<n;i++)
signed main()
{
    fastio
    int t; cin>>t;
    while (t--)
    {
        int n,m,c=0; cin>>n>>m;
        int arr[n*m];
        fl(i,n*m) cin>>arr[i];
        fl(i,n*m){
        fl(j,i){
            if(arr[j]<arr[i]) c++;
            }
        }
        cout<<c<<endl;
    }
}
