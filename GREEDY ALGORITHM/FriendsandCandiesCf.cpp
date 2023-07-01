#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
int main()
{
    fastio
    int t;cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n];
        int total=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            total+=arr[i];
        }
        if(total%n!=0) cout<<-1<<endl;
        else
        {
            int k=0;
            int req=total/n;
            sort(arr,arr+n);
            for(int i=0;i<n;i++)
            {
                if(arr[i]>req)
                {
                    k++;
                }
            }
            cout<<k<<endl;
        }
    }
    return 0;
}