#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int j=-1;
    for(int i=0;i<n;i++)
    {
        if(v[i]<1)
        {
            j++;
            swap(v[i],v[j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<' ';
    }
    cout<<endl;
}