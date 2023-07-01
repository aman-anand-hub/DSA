#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int x; cin>>x;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int low=0,high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(v[mid]<x)
            {
                low=mid+1;
            }
            else if(v[mid]>x && v[mid-1]>x)
            {
                high=mid-2;
            }
            else
            {
                if(v[mid]==x)
                {
                    cout<<v[mid]<<endl; break;
                }
                else if(v[mid-1]<x && x<v[mid])
                {
                    cout<<v[mid-1]<<endl; break;
                }
            }
        }
    }
}