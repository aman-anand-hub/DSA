#include<bits/stdc++.h>
using namespace std;
void SelectionSort(vector<int> &v, int n)
{
    for(int i=0;i<n-1;i++)
    {
        int curr_min_idx=-1;
        int curr_min=INT_MAX;
        for(int j=i;j<n;j++)
        {
            if(v[j]<=curr_min)
            {
                curr_min=v[j];
                curr_min_idx=j;
            }
        }
        swap(v[i],v[curr_min_idx]);
    }
}
int main()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    SelectionSort(v,n);
    for(int i=0;i<n;i++) cout<<v[i]<<' ';
}