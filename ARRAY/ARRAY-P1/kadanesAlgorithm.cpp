#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int kadanes(int arr[], int n){
    int max_sum, curr_sum;
    max_sum = curr_sum =arr[0];
    for (int i = 1; i < n; i++)
    {
        curr_sum = max(arr[i], curr_sum+arr[i]);
        if (curr_sum > max_sum)
        {
            max_sum = curr_sum;
        }
    }
    return max_sum;
}

int main(){
    int count;
    cout<<"enter size: "<<endl;
    cin>>count;
    int a[count];
    cout<<"enter array: "<<endl;
    for (int i = 0; i < count; i++)
    {
        cin>>a[i];
    }
    cout<<"highest sum of largest contigious subarray is: "<<kadanes(a, count)<<endl;
    return 0;
}