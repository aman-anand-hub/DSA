#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printSubstring(string s, int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        cout<<s[i];
    }   
}

void largesrPalString(string s)
{
    int low, high;
    int start=0, end=1;
    for (int i = 1; i < s.length(); i++)
    {   //even
        low=i-1; high=i;
        while (low>=0 && high<s.length() && s[low]==s[high])
        {
            if (high-low+1>end)
            {
                start=low;
                end=high-low+1;
            }
            low--;high++;
        }
        //odd
        low=i-1; high=i+1;
        while (low>=0 && high<s.length() && s[low]==s[high])
        {
            if (high-low+1>end)
            {
                start= low;
                end= high-low+1;
            }
            low--;high++;
        }
        low--;
        high++;
    }
    printSubstring(s, start, start+end-1);
}

int main()
{
    string str; cout<<"enter the string: "<<endl; cin>>str;

    largesrPalString(str);
    cout<<endl;

    return 0;
}