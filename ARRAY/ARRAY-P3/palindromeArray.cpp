#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n)
{
    string s = "" + n;
    int len =  s.length();
    for (int i = 0; i < len/2; i++)
    {
        if (s[i] != s[len-i-1])
        {
            return false;
        }
        
    }
    return true;
}

bool isPalindromeArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool ans = isPalindrome(arr[i]);
        if (ans == false)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int count; cout<<"enter size: "<<endl; cin>>count;
    int arr[count]; cout<<"enter array: "<<endl;
    for (int i = 0; i < count; i++)
    {
        cin>>arr[i];
    }

    bool ans = isPalindromeArray(arr, count);
    if (ans == true)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;    
    }

    return 0;
}