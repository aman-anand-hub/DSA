#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int i=0;
    while(i<n)
    {
        int ele=v[i];
        int freq=1;
        while(v[i]==v[i+1] && i+1<n)
        {
            freq++;
            i++;
        }
        if(freq>1)
        {
            cout<<ele<<' '<<freq<<' ';
            cout<<endl;
            i++;
        }
        else if(freq==1)
        {
            cout<<ele<<' '<<1<<' ';
            cout<<endl;
            i++;
        }
    }
}