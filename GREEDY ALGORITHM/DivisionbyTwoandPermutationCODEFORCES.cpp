#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
void square()
{
    int n; cin>>n;
    int arr[n];
    unordered_map<int,int> map;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        map[i+1]=0;
        while (arr[i]>n) arr[i]/=2;
    }
    sort(arr,arr+n);
    bool verdict=true;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=n && map[arr[i]]==0)
        {
            map[arr[i]]=1;
        }
        else
        {
            while(arr[i]>0)
            {
                if(arr[i]<=n && map[arr[i]]==0)
                {
                    map[arr[i]]=1;
                    break;
                }
                arr[i]/=2;
            }
            if(arr[i]>0) continue;
            else
            {
                verdict=false; 
            }
        }
    }
    if(verdict) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    fastio
    int t; cin>>t;
    while (t--)
    {
        square();
    }
    return 0;
}