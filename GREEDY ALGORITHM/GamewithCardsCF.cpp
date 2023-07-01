#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int m; cin>>m;
        vector<int> b(m);
        for(int i=0;i<m;i++) cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a[n-1]>b[m-1]) cout<<"Alice"<<endl<<"Alice"<<endl;
        else if(a[n-1]==b[m-1]) cout<<"Alice"<<endl<<"Bob"<<endl;
        else if(a[n-1]<b[m-1]) cout<<"Bob"<<endl<<"Bob"<<endl;
    }
}