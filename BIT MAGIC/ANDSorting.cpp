#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        vector<int> not_in_pos;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]!=i) not_in_pos.push_back(v[i]);
        }
        int res=not_in_pos[0];
        for(int i=1;i<not_in_pos.size();i++) res&=not_in_pos[i];
        cout<<res<<endl;
    }
}