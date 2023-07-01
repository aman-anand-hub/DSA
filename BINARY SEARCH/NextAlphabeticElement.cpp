#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        char x; cin>>x;
        vector<char> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        char res;
        v.push_back('#');
        int low=0,high=n;
        while(low<=high)
        {
            int mid= (low+high)/2;
            if(v[mid]==x)
            {
                low=mid+1;
            }
            else if(v[mid]<x)
            {
                low=mid+1;
            }
            else if(v[mid]>x)
            {
                res=v[mid];
                high=mid-1;
            }
        }
        if(res!='#') cout<<res<<endl;
        else cout<<-1<<endl;
    }
}