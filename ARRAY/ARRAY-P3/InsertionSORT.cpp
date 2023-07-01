#include<bits/stdc++.h>
using namespace std;
void InsertionSort(vector<int> &v, int n)
{
    int key,j;
    for(int i=1;i<n;i++)
    {
        key=v[i];
        j=i-1;
        // while key is smaller then elemnts to its left shift all elements towards right bu one.
        while(j>=0 && v[j]>key)
        {
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=key;
    }
}
int main()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    InsertionSort(v,n);
    for(int i=0;i<n;i++) cout<<v[i]<<' ';
}