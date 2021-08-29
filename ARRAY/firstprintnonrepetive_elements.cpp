#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int non_repetive(int arr[], int n)
{
    unordered_map <int, int> umap;
    for (int i = 0; i < n; i++)
    {
        umap[arr[i]]++;
    }

    for(int j=0; j<n; j++)
    {
        if (umap[arr[j]]==1)
        {
            return arr[j];
        }   
    }
    return -1;
}

int main(){
    cout<<"Enter the number of test cases: "<<endl;
    int t; cin>>t;
    while (t--)
    {
        cout<<"Enter the size of the array: "<<endl;
        int count;
        cin>>count;
        int a[count];
        cout<<"enter the elements of the array: "<<endl;
        for (int i = 0; i < count; i++)
        {
            cin>>a[i];
        }
        cout<<non_repetive(a, count)<<endl;
    }
    return 0;
}