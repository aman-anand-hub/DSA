#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        int cost=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(v[i][j]=='.' && j+1<m && v[i][j+1]=='.')
                {
                    cost+=min(2*x, y);
                    j++;
                }
                else if(v[i][j]=='.')
                {
                    cost+=x;
                }
            }
        }
        cout<<cost<<endl;
    }
    return 0;
}