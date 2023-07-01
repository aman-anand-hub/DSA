#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

int pairSum(int arr[], int count, int k){

    unordered_map<int, int> m;
    for (int  i = 0; i < count; i++)
    {
        m[arr[i]]++;
    }
    int twicecount = 0;
    for (int i = 0; i < count; i++)
    {
        twicecount += m[k-arr[i]];
        if (arr[i] == k-arr[i])
        {
            twicecount--;
        }
    }

    return twicecount/2;
}

int main(){
    cout<<"enter size of array: "<<endl;
    int count;
    cin>>count;
    int a[count];
    cout<<"enter array: "<<endl;
    for (int i = 0; i < count; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the sum whose pair is to be found: "<<endl;
    int k;
    cin>>k;
    cout<<"Number of pairs whose sum is equal to "<<k<<" is "<<pairSum(a, count, k)<<endl;


    return 0;
}