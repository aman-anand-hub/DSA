#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    fastio
    int t;cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
        vector<int> v(k);
        for(int i=0;i<k;i++) cin>>v[i];
        sort(v.rbegin(),v.rend());
        int total=0;
        int cat=0;
        for(int i=0;i<k;i++)
        {
            if(v[i]>cat)
            {
                cat+=n-v[i];
                total++;
            }
            else break;
        }
        cout<<total<<endl;
    }
    return 0;
}