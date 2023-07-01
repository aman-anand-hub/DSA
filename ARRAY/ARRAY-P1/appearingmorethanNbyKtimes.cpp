#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int greaterNbyK(int arr[], int n, int k ){
    unordered_map<int, int> freq;
    int m = n/k;

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    for (auto x: freq)
    {
        if (x.second > m)
        {
            cout<<x.first<<endl;
        }
    }
}

int main()
{
    cout<<"enter size: "<<endl;
    int count; cin>>count;
    int arr[count]; cout<<"enter array: "<<endl;
    for (int i = 0; i < count; i++)
    {
        cin>>arr[i];
    }

    int k; cout<<"enter value of K: "<<endl; cin>>k;

    cout<<"elements greater than "<<count/k<<" are "<<endl<<greaterNbyK(arr, count, k)<<endl; 

    return 0;
}