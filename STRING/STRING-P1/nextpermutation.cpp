#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void nextPermutation(int arr[], int n)
{
    int idx=-1;
    for (int i = n-1; i >=1; i--)
    {
        if(arr[i]>arr[i-1])
        {
            idx=i;
            break;
        }
    }
    if(idx==-1)
    {
        int start=0, end=n-1;
        while (start<end)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i];
        }
    }
    else
    {
        int prev= idx;
        for (int i = n-1; i > idx; i--)
        {
            if(arr[i]>arr[idx-1] && arr[idx]>arr[i])
            {
                prev=i;
                break;
            }
        }
        swap(arr[idx-1], arr[prev]);
        int k = idx, end= n-1;
        while (k<end)
        {
            swap(arr[k], arr[end]);
            k++;
            end--;
        }
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i];
        }
    }
}

int main()
{
    int n; cout<<"enter size: "<<endl; cin>>n;
    int arr[n]; cout<<"enter array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Next permutaion: ";
    nextPermutation(arr, n);

    return 0;
}