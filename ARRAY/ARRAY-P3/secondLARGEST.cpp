#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int lar=INT_MIN;
    int sec_lar=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(v[i]>lar)
        {
            sec_lar=lar;
            lar=v[i];
        }
    }
    if(sec_lar==INT_MIN) cout<<lar<<endl;
    else cout<<sec_lar<<endl;
}