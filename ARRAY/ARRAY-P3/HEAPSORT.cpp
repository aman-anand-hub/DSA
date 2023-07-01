#include<bits/stdc++.h>
using namespace std;
void heapify(vector<int> &v, int n, int i)
{
    int lar=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && v[l]>v[lar]) lar=l;
    if(r<n && v[r]>v[lar]) lar=r;
    if(lar!=i)
    {
        swap(v[i],v[lar]);
        heapify(v,n,lar);
    }
}
void heapsort(vector<int> &v, int n)
{
    for(int i=(n/2)-1;i>=0;i--) heapify(v,n,i);
    for(int i=n-1;i>0;i--)
    {
        swap(v[0],v[i]);
        heapify(v,i,0);
    }
}
int main()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    heapsort(v,n);
    for(int i=0;i<n;i++) cout<<v[i]<<' ';
}