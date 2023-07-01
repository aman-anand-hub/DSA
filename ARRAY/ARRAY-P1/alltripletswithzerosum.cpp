#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count; cout<<"enter size: "<<endl; cin>>count;
    cout<<"enter array: "<<endl; int arr[count]; 
    for (int i = 0; i < count; i++)
    {
        cin>>arr[i];
    }

    sort(arr, arr+count);
    bool found = false;
    for (int i = 0; i < count-2; i++)
    {
        int l = i+1, r = count-1;
        while (l<r)
        {
            if (arr[i]+arr[l]+arr[r] == 0)
            {
                cout<<arr[i]<<";"<<arr[l]<<";"<<arr[r]<<endl;
                found = true;
                l++;r--;
            }
            else if (arr[i]+arr[l]+arr[r] < 0)
            {
                l++;
            }
            else
            {
                r--;
            }
        } 
    }
    if (found == false)
    {
        cout<<"NO such triplet found"<<endl;
    }
    
    return 0;
}