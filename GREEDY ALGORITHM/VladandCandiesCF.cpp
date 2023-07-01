#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        if(n==1)
        {
            if(v[0]==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else
        {
            bool isposs=(v[n-1]-v[n-2]<2);
            if(isposs) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}