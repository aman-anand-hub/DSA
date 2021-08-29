#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int smallestSubsetGreaterThanX(int arr[], int n, int x){
    int min_idx=INT_MAX, s=0, i=0, j=0;
    while (s<=x && i<=j)
    {
        s= s+arr[j];
        j++;
    }
    while (s>x && i<j) 
    {
        min_idx = min(min_idx, j-i);
        s= s-arr[i];
        i++;
    }
    return min_idx;
}

int main()
{
    int count; cout<<"enter size: "<<endl; cin>>count;
    cout<<"enter array: "<<endl; int arr[count];
    for (int i = 0; i < count; i++)
    {
        cin>>arr[i];
    }
    int x; cout<<"enter number: "<<endl; cin>>x;
    cout<<smallestSubsetGreaterThanX(arr, count, x)<<endl;   

    return 0;
}