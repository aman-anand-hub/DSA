#include<bits/stdc++.h>
using namespace std;
int main()
{// works only when elemets on left are shifted to right 
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int v[n];
        for(int i=0;i<n;i++) cin>>v[i];
        int low=0, high=n-1;
        int idx;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int next=(mid+1)%n;
            int prev=(mid+n-1)%n;
            if(v[next]>=v[mid] && v[prev]>=v[mid])
            {
                idx=mid;
                break;
            }
            else if(v[low]<=v[mid])
            {
                low=mid+1;
            }
            else if(v[mid]<=v[high])
            {
                high=mid-1;
            }
        }
        cout<<idx<<endl;
    }
}