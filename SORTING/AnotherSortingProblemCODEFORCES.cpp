#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
bool sortings(pair<string,int>a, pair<string,int>b)
{
    for (int i = 0; i <sizeof(a); i++)
    {
        if(a.first[i]!=b.first[i])
        {
            if((i+1)&1)
            {
                return a.first[i]<b.first[i];
            }
            else
            {
                return a.first[i]>b.first[i];
            }
        }
    }
    return false;
}
int main()
{
    fastio
    int n,m; cin>>n>>m;
    vector<pair<string,int>> v(n);
    for(int i=0;i<n; i++)
    {
        cin>>v[i].first;
        v[i].second= i+1;
    }
    sort(v.begin(),v.end(),sortings);
    for (auto x:v) cout<<x.second<<' ';
    return 0;
}