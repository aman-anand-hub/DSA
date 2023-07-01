#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
int main()
{
    fastio
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        char arr[n+1][n+1];
        vector<pair<int,int>> v;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]=='*')
                {
                    v.push_back({i,j});
                }
            }
        }
        int a,b,c,d;
        a=v[0].first, b=v[0].second, c=v[1].first, d=v[1].second;
        if(a==c)
        {
            if((n-a)>=abs(b-d))
            {
                arr[a+abs(b-d)][b]=arr[c+abs(b-d)][d]='*';       
            }
            else
            {
                arr[a-abs(b-d)][b]=arr[c-abs(b-d)][d]='*';
            }
        }
        else if(b==d)
        {
            if(b>=abs(b-d))
            {
                arr[a][b-abs(b-d)]=arr[c][d-abs(b-d)]='*';
            }
            else
            {
                arr[a][b+abs(b-d)]=arr[c][d+abs(b-d)]='*';
            }
        }
        else 
        {
            arr[a][d]=arr[c][b]='*';
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cout<<arr[i][j];
            }
            cout<<endl;
        }
    }
}