#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cout<<"enter test-cases: "<<endl; cin>>t;

    while (t--)
    {
        string s; cout<<"enter string: "<<endl; cin>>s;
        int n = s.length();
        for (int i = 0; i < n/2; i++)
        {
            swap(s[i], s[n-i-1]);
        }
        cout<<"reversed string: "<<s<<endl;
    }

    return 0;
}