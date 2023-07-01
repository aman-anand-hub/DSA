#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int max_curr=INT_MIN;
    int max_old=INT_MIN;
    for(int i=n-1;i>=0;i--)
    {
        max_curr=max(max_curr,v[i]);
        if(max_curr>max_old) cout<<v[i]<<' ';
        if(max_curr>max_old) max_old=max_curr;
    }
    cout<<endl;
}