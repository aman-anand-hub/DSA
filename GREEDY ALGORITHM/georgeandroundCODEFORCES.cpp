#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m; cin>>n>>m;
    int dif[n], set[m];
    for(int i=0; i<n;i++) cin>>dif[i];
    for(int i=0; i<m; i++) cin>>set[i];
    sort(dif, dif+n);
    sort(set, set+m);
    int count=0, p=m-1;
    for (int i = n-1; i>=0; i--)
    {
        if(p>=0 && set[p]>=dif[i])
        {
            p--;
        }
        else
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}