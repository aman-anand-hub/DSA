#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2; cout<<"enter the sizes of array: "<<endl;
    cin>>n1>>n2;
    int a1[n1], a2[n2]; cout<<"enter array 1: "<<endl;
    for (int i = 0; i < n1; i++)
    {
        cin>>a1[i];
    }
    cout<<"enter array 2: "<<endl;
    for (int i = 0; i < n2; i++)
    {
        cin>>a2[i];
    }

    unordered_set<int> s;
    for (int i = 0; i < n1; i++)
    {
        s.insert(a1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        if (s.find(a2[i]) == s.end())
        {
            cout<<"NO"<<endl;
            break;
        }
        else{
            cout<<"YES"<<endl;
            break;
        }
    }

    return 0;
}