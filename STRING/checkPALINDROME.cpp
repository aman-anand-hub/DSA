#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s)
{
    int n= s.length();
    for (int i = 0; i < n/2; i++)
    {
        if (s[i] != s[n-i-1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t; cout<<"enter test-cases: "<<endl; cin>>t;

    while (t--)
    {
        string s; cout<<"enter string: "<<endl; cin>>s;
        bool ans =checkPalindrome(s);
        if (ans == true)
        {
            cout<<"is palindrome: "<<endl;
        }
        else
        {
            cout<<"is not palindrome: "<<endl;
        }
    }

    return 0;
}