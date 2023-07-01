#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int minDifference(int arr[], int n, int m){
    if (n<m)
    {
        return -1;
    }
    
    int min_diff= INT_MAX, i=0;
    sort(arr, arr+n);
    while (i+m-1<n)
    {
        int curr_diff= arr[i+m-1]- arr[i];
        min_diff= min(curr_diff, min_diff);
        i++;
    }
    return min_diff;
}

int main()
{
    int count; cout<<"enter size: "<<endl; cin>>count;
    int arr[count]; cout<<"enter array: "<<endl;
    for (int i = 0; i < count; i++)
    {
        cin>>arr[i];
    }
    int m; cout<<"enter the count of children: "<<endl; cin>>m;
    cout<<minDifference(arr, count, m);

    return 0;
}