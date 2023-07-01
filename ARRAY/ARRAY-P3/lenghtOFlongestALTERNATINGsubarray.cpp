#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int res=1;
    int curr=1;
    for(int i=1;i<n;i++)
    {
        if((v[i]%2==0 && v[i-1]%2!=0) || (v[i]%2!=0 && v[i-1]%2==0))
        {
            curr++;
            res=max(res,curr);
        }
        else
        {
            curr=1;
        }
    }
    cout<<endl<<res<<endl;
}