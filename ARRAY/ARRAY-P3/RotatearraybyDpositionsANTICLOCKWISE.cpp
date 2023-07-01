#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d; cin>>n>>d;
    int v[n];
    for(int i=0;i<n;i++) cin>>v[i];
    int temp[d];
    int k=0;
    for(int i=n-d;i<n;i++) 
    {
        if(k<d)
        {
            temp[k]=v[i];
            k++;
        }
    }
    for(int i=n-1;i>=d;i--)
    {
        v[i]=v[i-d];
    }
    k=0;
    for(int i=0;i<d;i++)
    {
        if(k<d)
        {
            v[i]=temp[k];
            k++;
        }
    }
    for(int x:v) cout<<x<<' ';
    cout<<endl;
}