#include<bits/stdc++.h>
using namespace std;
int bs(vector<int> v,int low,int high, int x)
{
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(v[mid]==x)
        {
            return mid; 
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
    return -1;
}
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
        int idx;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int next=(mid+1)%n;
            int prev=(mid-1+n)%n;
            if(v[mid]<=v[next] && v[mid]<=v[prev])
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
        cout<<"helo"<<endl;
        cout<<idx<<endl;
        if(x>=v[idx])
        {
            cout<<bs(v,idx,n-1,x)<<endl;
        }
        else
        {
            cout<<bs(v,0,idx-1,x)<<endl;
        }
    }
}