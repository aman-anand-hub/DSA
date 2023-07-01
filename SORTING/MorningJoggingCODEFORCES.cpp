#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
multiset<pair<int,int>> mst;
int arr[101][101];
int main()
{
    fastio
    int t; cin>>t;
    while (t--)
    {
        mst.clear();
        int n,m; cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                arr[i][j]=-1;
                int x; cin>>x;
                mst.insert({x,i});
            }
        }
        for(int i=0;i<m;i++)
        {
            auto itr= mst.begin();
            arr[itr->second][i]=itr->first;
            mst.erase(itr);
        }
        while (!mst.empty())
        {
            auto itr=mst.begin();
            int in=0;
            while (arr[itr->second][in]!=-1)
            {
                in++;
            }
            arr[itr->second][in]=itr->first;
            mst.erase(itr);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<arr[i][j]<<' ';
            }
            cout<<endl;
        }
    }
    return 0;
}