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
        int res=-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int dm=abs(x-v[mid]);
            int dl=abs(x-v[mid-1]);
            int dr=abs(x-v[mid+1]);
            if(dl<dm)
            {
                res=mid-1;
                high=mid-1;
            }
            else if(dr<dm)
            {
                res=mid+1;
                low=mid+1;
            }
            else if(dm<=dl && dm<=dr)
            {
                res=mid;
                break;
            }
        }
        cout<<endl;
        cout<<res<<endl;
        cout<<v[res]<<endl;
    }
    
}