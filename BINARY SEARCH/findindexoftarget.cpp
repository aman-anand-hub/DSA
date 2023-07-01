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
        int x; cin>>x;
        int low=0,high=n-1;
        bool found=false;
        int idx=-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(v[mid]==x)
            {
                idx=mid;
                found=true;
                break;
            }
            else if(x<v[mid])
            {
                high=mid-1;
            }
            else if(x>v[mid])
            {
                low=mid+1;
            }
        }
        if(found) cout<<idx<<endl;
        else cout<<"NOT FOUND."<<endl;
    }
}