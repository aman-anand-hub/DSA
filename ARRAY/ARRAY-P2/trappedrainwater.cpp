#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int trappedWater(int arr[], int n){
    int l[n], r[n], ans= 0;
    l[0]= arr[0]; r[n-1]= arr[n-1];
    for (int i = 1; i < n; i++)
    {
        l[i]= max(l[i-1], arr[i]);
    }
    for (int i = n-2; i >= 0; i--)
    {
        r[i]= max(arr[i], r[i+1]);
    }
    for (int i = 0; i < n; i++)
    {
        ans += (min(l[i], r[i]) - arr[i]);
    }
    return ans;
}

int main()
{
    int count; cout<<"enter size: "<<endl; cin>>count;
    cout<<"enter array: "<<endl; int arr[count];
    for (int i = 0; i < count; i++)
    {
        cin>>arr[i];
    }
    cout<<"trapper water is: "<<trappedWater(arr, count)<<endl;

    return 0;
}