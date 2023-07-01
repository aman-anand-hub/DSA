#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
int main()
{
    fastio
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int ans1=0,ans2=0,ans3=0;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==1 || arr[i]==n) c++;
            ans1++;
            if(c==2) break;
        }
        c=0;
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]==1 || arr[i]==n) c++;
            ans2++;
            if(c==2) break;
        }
        int p_min=0,p_max=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==1) p_min=i;
            if(arr[i]==n) p_max=i;
        }
        if(p_min<p_max) ans3=p_min+1+n-p_max;
        else ans3=p_max+1+n-p_min;
        int k= min(ans1,min(ans2,ans3));
        cout<<k<<endl;
    }
    return 0;
}