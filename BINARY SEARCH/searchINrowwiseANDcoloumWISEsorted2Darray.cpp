#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m,x; cin>>n>>m>>x;
        int arr[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
        int i=0,j=0;
        int i1=-1,j1=-1;
        while(i<n && j<m)
        {
            if(arr[i][j]==x)
            {
                i1=i;j1=j;
                break;
            }
            else if(j+1<m && arr[i][j+1]<=x)
            {
                j++;
            }
            else
            {
                i++;
            }
        }
        cout<<i1<<' '<<j1<<endl; 
    }
}