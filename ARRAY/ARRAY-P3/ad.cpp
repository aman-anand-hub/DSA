#include<bits/stdc++.h>
using namespace std;
void opmerge(vector<int> &v, int low, int mid, int high)
    {
        int n=mid-low+1;
        int m=high-mid;
        vector<int> a(n),b(m);
        for(int i=0;i<n;i++) a[i]=v[low+i];
        for(int i=0;i<m;i++) b[i]=v[mid+1+i];
        int i=0,j=0,k=low;
        while(i<n && j<m)
        {
            if(a[i]<=b[j])
            {
                v[k]=a[i];
                k++;i++;
            }
            else
            {
                v[k]=b[j];
                j++;k++;
            }
        }
        while(i<n)
        {
            v[k]=a[i];
            k++;i++;
        }
        while(j<m)
        {
            v[k]=b[j];
            k++;j++;
        }
    }
    
    void mergesort(vector<int> &v, int low, int high)
    {
        if(low>=high) return;
        int mid=low+(high-low)/2;
        mergesort(v,low,mid);
        mergesort(v,mid+1,high);
        opmerge(v,low,mid,high);
    }
int main()
{
    int n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    mergesort(v,0,n-1);
    //mergesort(v,(n-1)/2+1,n-1);
    for(int i=0;i<n;i++) cout<<v[i]<<' ';
}