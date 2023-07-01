#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int minSwaps(int arr[], int n, int k){
    int swaps = 0, i =0, it =0;
    while (i<n-1)
    {
        if (arr[i]<=k && arr[i+1]<=k)
        {
            i++;
        }
        else if(arr[i]<=k)
        {
            swaps++; it++; i++;
        }
        else
        {
            i++;
        }
    }
    if (it<=1)
    {
        return 0;
    }
    else
    {
        return swaps;
    }
}

int main()
{
    int count; cout<<"Enter size: "<<endl; cin>>count;
    int arr[count]; cout<<"enter array: "<<endl;
    for (int i = 0; i < count; i++)
    {
        cin>>arr[i];
    }
    int k; cout<<"enter value of k: "<<endl; cin>>k;

    cout<<"minimum swaps required are: "<<minSwaps(arr, count, k)<<endl;

    return 0;
}