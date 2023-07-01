#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n; 
        vector<int> v(n);
        int x; cin>>x;
        for(int i=0;i<n;i++) cin>>v[i];
        int low=0,high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(v[mid]==x || v[mid-1]==x || v[mid+1]==x)
            {
                if(x==v[mid])
                {
                    cout<<mid<<endl; break;
                }
                else if(x==v[mid-1])
                {
                    cout<<mid-1<<endl; break;
                }
                else if(x==v[mid+1])
                {
                    cout<<mid+1<<endl; break;
                }
            }
            else if(x<v[mid])
            {
                high=mid-2;
            }
            else if(x>v[mid])
            {
                low=mid+2;
            }
        }
    }
}