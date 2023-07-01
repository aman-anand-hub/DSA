#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,m; cin>>n>>m;
    
    vector<string> s(n);
    vector<string> rev(n);
    vector<bool> ispal(n, true);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        rev[i]="";
        for (int j=0;j<m; j++)
        {
            rev[i]=rev[i]+s[i][m-1-j];
            if(s[i][j]!=s[i][m-1-j])
            {
                ispal[i]= false;
            }
        }
    }

    vector<pair<int,int> > good;
    vector<bool> vis(n);
    for (int i = 0; i < n; i++)
    {
        if(vis[i])
        {
            continue;
        }
        for (int j=i+1;j<n;j++)
        {
            if(vis[j])
            {
                continue;
            }
            if(s[i]==rev[j])
            {
                good.push_back({i,j});
                vis[i]=vis[j]=1;
                break;
            }
        }
    }
    int count=0, idx=-1;
    for (int i = 0; i < n; i++)
    {
        if(vis[i])
        {
            continue;
        }
        if(!ispal[i])
        {
            continue;
        }
        count++;
        idx=i;   
    }
    int ans= 2*m*good.size()+ (count>0)*m;
    cout<<ans<<endl;
    vector<char> res(ans,'0');
    for (int i = 0; i < (int)good.size(); i++)
    {
        for (int j = 0; j < m; j++)
        {
            int now= i*m+j;
            res[now]= s[good[i].first][j];
            res[ans-1-now]= s[good[i].first][j];
        }
        
    }
    if(count)
    {
        for (int j=0;j<m;j++)
        {
            int now= good.size()*m+j;
            res[now]= s[idx][j];
        }
    }
    for (auto x:res)
    {
        cout<<x;
    }
    return 0;
}