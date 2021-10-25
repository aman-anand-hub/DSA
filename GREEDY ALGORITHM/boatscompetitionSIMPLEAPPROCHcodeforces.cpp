#include<bits/stdc++.h>
using namespace std;
int main() {
    //ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int ans=0;
        for(int i=1;i<=2*n;i++) {
            int j=0,k=n-1,ans1=0;
            while(j<k) {
                if(arr[j]+arr[k]==i) {
                    j++; k--; ans1++;
                }
                else if(arr[j]+arr[k]>i) {
                    k--;
                }
                else {
                    j++;
                }
            }
            ans=max(ans,ans1);
        }
        cout<<ans<<endl;       
    }
    return 0;
}