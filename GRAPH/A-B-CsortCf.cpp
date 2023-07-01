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
        for(int i=n-1;i>0;i-=2)
        {
            if(v[i-1]>v[i])
            {
                swap(v[i-1],v[i]);
            }
        }
        bool isposs=true;
        for(int i=0;i<n-1;i++)
        {
            if(v[i]>v[i+1])
            {
                isposs=false;
                break;
            }
        }
        if(isposs) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}