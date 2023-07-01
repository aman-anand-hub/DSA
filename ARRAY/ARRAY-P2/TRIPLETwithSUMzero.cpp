#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void tripSumZero(int arr[], int n)
{
    bool found= false;
    for (int i = 0; i < n-2; i++)
    {
        int l= i+1, r=n-1;
        while (l<r)
        {
            if (arr[i]+arr[l]+arr[r]==0)
            {
                found= true;
                cout<<"indices with sum zero are: "<<i<<", "<<l<<", "<<r<<endl;
                l++;
                r--;
            }
            else if (arr[i]+arr[l]+arr[r]<0)
            {
                l++;
            }
            else
            {
                r--;
            }
        }   
    }
    if(found== false)
    {
        cout<<"No such indices exist!"<<endl;
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

    tripSumZero(arr, n);

    return 0;
}