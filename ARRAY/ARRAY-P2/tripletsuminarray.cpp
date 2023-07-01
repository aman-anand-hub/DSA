#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// time complexity is: O(n^2)
// space comolexity is: O(1)

int main()
{
    int count; cout<<"enter array size: "<<endl; cin>>count;
    int arr[count]; cout<<"enter array: "<<endl;
    for (int i = 0; i < count; i++)
    {
        cin>>arr[i];
    }
    int k; cout<<"enter the sum of triplet: "<<endl; cin>>k;
    
    int ans=0;
    sort(arr, arr+count);
    for (int i = 0; i < count-2; i++)
    {
        int l = i+1, r= count-1;
        while (l<r)
        {
            if (arr[i]+arr[l]+arr[r] == k)
            {
                ans = 1;
                break;
            }
            else if (arr[i]+arr[l]+arr[r] < k)
            {
                l++;
            }
            else
            {
                r++;
            }
        }
        if (ans==1)
        {
            break;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}
