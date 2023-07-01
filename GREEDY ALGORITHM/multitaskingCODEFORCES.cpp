#include<bits/stdc++.h>
using namespace std;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,k,i,j;
    cin>>n>>m>>k;
    int a[n+2][m+2];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>a[i][j];
    }
    long long ans=(m*(m-1)/2);
    cout<<ans<<endl;
    if(k==0){
    for(i=1;i<=m;i++)
    {
        for(j=i+1;j<=m;j++)
        {
            printf("%d %d\n",i,j);
        }
    }
    }
    else
    {
         for(i=m;i>=2;i--)
        {
            for(j=i-1;j>=1;j--)
            {
                printf("%d %d\n",i,j);
            }
        }
    }


return 0;
}
