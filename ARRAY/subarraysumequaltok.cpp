#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"enter the size of array: "<<endl;
    int count;
    cin>>count;
    int a[count];
    cout<<"enter the array elements: "<<endl;
    for (int i = 0; i < count; i++)
    {
        cin>>a[i];
    }
    cout<<"enter the value of k: "<<endl;
    int k; cin>>k;
    unordered_map<int,int> m;
    int s=0, c=0;
    int i=0;
    while (i < count)
    {
        s = s + a[i];
        if (s==k)
        {
            c++;
        }
        if (m.find(s-k)!=m.end())
        {
            c++;
        }
        
        else
        {
            m[s];
        }
        i++;
    }
    cout<<"number of subarrays whose sum is equal to "<<k<<" are: "<<c<<endl;


    return 0;
}