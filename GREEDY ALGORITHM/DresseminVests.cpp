#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,y; cin>>n>>m>>x>>y;
    int a[n], b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int j=0;j<m;j++) cin>>b[j];
    vector<pair<int, int> >ans;
    int i=0,j=0;
    while (i<n && j<m)
    {
        if(a[i]-x<=b[j] && a[i]+y>=b[j])
        {
            ans.push_back({i+1,j+1}), i++, j++;
        }
        else if(a[i]+y<b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    cout<<ans.size()<<endl;
    for(i=0; i<ans.size(); i++)
    {
        cout<<ans[i].first<<' '<<ans[i].second<<endl;
    }
    return 0;
}