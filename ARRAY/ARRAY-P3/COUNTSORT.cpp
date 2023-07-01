#include<bits/stdc++.h>
using namespace std;
#define N 100
void countsort(vector<int> &v, int n)
{
    int max_ele=0;
    for(int i=0;i<n;i++) max_ele=max(max_ele,v[i]);
    vector<int> count(N);
    for(int i=0;i<n;i++) count[v[i]]++;
    for(int i=1;i<=max_ele;i++) count[i]+=count[i-1];
    vector<int> ans(n);
    for(int i=n-1;i>=0;i--) ans[--count[v[i]]]=v[i];
    for(int i=0;i<n;i++) v[i]=ans[i];
}
int main()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    countsort(v,n);
    for(int i=0;i<n;i++) cout<<v[i]<<' ';
}