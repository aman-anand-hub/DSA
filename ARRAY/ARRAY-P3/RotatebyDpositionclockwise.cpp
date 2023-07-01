#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d; cin>>n>>d;
    int v[n];
    for(int i=0;i<n;i++) cin>>v[i];
    int temp[d];
    for(int i=0;i<d;i++) temp[i]=v[i];
    for(int i=0;i<n-d;i++) v[i]=v[d+i];
    int k=0;
    for(int i=n-d;i<n;i++)
    {
        if(k<d)
        {
            v[i]=temp[k];
            k++;
        }
    }
    for(int i=0;i<n;i++) cout<<v[i]<<' ';
    cout<<endl;
}