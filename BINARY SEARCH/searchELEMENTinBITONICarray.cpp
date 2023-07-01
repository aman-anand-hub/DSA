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
        int peak=-1;
        int low=0,high=n-1;
        while(low<=high)
        {
            int mid= low+(high-low)/2;
            if(mid>0 && mid<n-1)
            {
                if(v[mid]>v[mid-1] && v[mid]>v[mid+1])
                {
                    peak=mid;
                    break;
                }
                else if(v[mid-1]>v[mid] && v[mid]>v[mid+1])
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
                    peak=0;
                    break;
                }
                else
                {
                    peak=1;
                    break;
                }
            }
            else if(mid==n-1)
            {
                if(v[mid]>v[mid-1])
                {
                    peak=n-1;
                    break;
                }
                else
                {
                    peak=n-2;
                    break;
                }
            }
        }
        int low1=0,high1=peak-1;
        int ans1=-1;
        while(low1<=high1)
        {
            int mid1=low1+(high1-low1)/2;
            if(v[mid1]==x)
            {
                ans1=mid1;
            }
            else if(x<v[mid1])
            {
                high1=mid1-1;
            }
            else if(v[mid1]<x)
            {
                low1=mid1+1;
            }
        }
        int low2=peak,high2=n-1;
        int ans2=-1;
        while(low2<=high2)
        {
            int mid2=low2+(high2-low2)/2;
            if(v[mid2]==x)
            {
                ans2=mid2;
            }
            else if(v[mid2]>x)
            {
                high2=mid2-1;
            }
            else if(v[mid2]<x)
            {
                low2=mid2+1;
            }
        }
        if(ans1!=-1) cout<<ans1<<endl;
        else cout<<ans2<<endl;
    }
}