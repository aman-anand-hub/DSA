#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]!=0)
        {
            swap(v[i],v[count]);
            count++;
        }
    }
    for(int x:v) cout<<x<<' ';
    cout<<endl;
}