#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int longestPalimSubStr(string str)
{
    int start=0, end=1;
    int low, high;
    int len=1;
    for (int i = 0; i < str.length(); i++)
    {
        low= i-1; high =i;
        while (low>=0 && high<str.length() && str[low]==str[high])
        {
            if(high-low+1>end)
            {
                len=max(INT_MIN, high-low+1);
                low--; high++;
            }
        }

        low=i-1; high= i+1;
        while (low>=0 && high<str.length() && str[low]==str[high])
        {
            if(high-low+1>end)
            {
                len=max(INT_MIN, high-low+1);
                low--; high++;
            }
        } 
    }
    return len;
}

int main()
{
    cout<<"enter the string: "<<endl;
    string s;
    cin>>s;
    cout<<"lenght of longest common subseq is: "<<longestPalimSubStr(s);

    return 0;
}