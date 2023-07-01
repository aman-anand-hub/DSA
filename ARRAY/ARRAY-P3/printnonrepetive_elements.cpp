#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int non_repetive(int arr[], int n){
    unordered_map<int, int> umap;
    for (int i = 0; i < n; i++)
    {
        umap[arr[i]]++;
    }
    for (int j = 0; j < n; j++)
    {
        if (umap[arr[j]] >= 1 )
        {
            cout<<arr[j]<<endl;
        }        
    }
    return -1;
}

int main(){
    cout<<"enter the number of test cases: "<<endl;
    int t;
    cin>>t;
    while (t--)
    {
        cout<<"enter the number of elements: "<<endl;
        int count; cin>>count;
        int a[count];
        for (int i = 0; i < count; i++)
        {
            cin>>a[i];
        }
        cout<<non_repetive(a, count)<<endl;
    }
    return 0;  
}