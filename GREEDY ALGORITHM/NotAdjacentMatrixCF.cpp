#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n+1][n+1];
        bool poss=true;
        if(n==2) poss=false;
        queue<pair<int,int>> q;
        int j=1;
        for(int i=1;i<=n;i++)
        {
            arr[i][i]=i;
            q.push((i+1,j));
        }

    }
}