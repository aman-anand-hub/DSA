#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int ans=-1;
        int low=0,high=n-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(mid>0 && mid<n-1)
            {
                if(v[mid]>v[mid-1] && v[mid]>v[mid+1])
                {
                    ans=mid;
                    break;
                }
                else if(v[mid]>v[mid+1] && v[mid-1]>v[mid])
                {
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
            else if(mid==0)
            {
                if(v[mid]>v[mid+1])
                {
                    ans=0;
                    break;
                }
                else 
                {
                    ans=1;
                    break;
                }
            }
            else if(mid==n-1)
            {
                if(v[mid]>v[mid-1])
                {
                    ans=n-1;
                    break;
                }
                else 
                {
                    ans=n-2;
                    break;
                }
            }
        }
        cout<<v[ans]<<endl;
    }
}