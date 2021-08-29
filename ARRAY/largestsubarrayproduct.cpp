#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxSubarrayProduct(int a[], int count){
    int max_ending_here = 1, min_ending_here = 1, max_so_far =0;
    int flag =0;
    for (int i = 0; i < count; i++)
    {
        if (a[i]>0)
        {
            max_ending_here= max_ending_here*a[i];
            min_ending_here= min(min_ending_here*a[i], 1);
        }
        else if (a[i]==0)
        {
            max_ending_here=1;
            min_ending_here=1;
        }
        else
        {
            int temp = max_ending_here;
            max_ending_here= max(min_ending_here*a[i], 1);
            min_ending_here= temp*a[i];
        }
        if (max_ending_here>max_so_far)
        {
            max_so_far= max_ending_here;
        }
    }
    if (flag==0 && max_so_far==0)
    {
        return 0;
    }
    return max_so_far;
}

int main(){
    int count;
    cout<<"enter array size: "<<endl;
    cin>>count;
    int a[count];
    cout<<"enter the array: "<<endl;
    for (int i = 0; i < count; i++)  cin>>a[i];

    cout<<maxSubarrayProduct(a, count)<<endl;


    return 0;
}