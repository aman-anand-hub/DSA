#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin>>n;
    int mx= INT_MAX, mn=0;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin>>t;
        mx= min(t,mx);
        mn= max(t,mn);
    }
    cout<<(mx+mn)/2<<endl;
    return 0;
}