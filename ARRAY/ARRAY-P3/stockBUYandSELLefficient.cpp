#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int profit=0;
    for(int i=1;i<n;i++)
    {
        if(v[i]>v[i-1]) profit+=v[i]-v[i-1];
    }
    cout<<profit<<endl;
}