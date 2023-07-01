#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    fastio
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int cost=0;
        int i=0, j=n-1;
        while(j>=0&&arr[j]) j--;
        while(i<n&&arr[i]) i++;
        if(j<0) cout<<0<<endl;
        else cout<<j-i+2<<endl;
    }
    return 0;
}