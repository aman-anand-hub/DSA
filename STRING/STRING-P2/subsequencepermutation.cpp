#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int subseqPermutation(string &s)
{
    string sorted_s =s;
    sort(sorted_s.begin(), sorted_s.end());
    int i=0, j=0;
    int count=0;
    while (i<s.length() && j<sorted_s.length())
    {
        if(s[i]==sorted_s[j])
        {
            count++;
        }
        i++;j++;
    }
    return s.length()-count;
}

int main()
{
    cout<<"enter the string: "<<endl;
    string s;
    cin>>s;
    cout<<"min value of k must be: "<<subseqPermutation(s);

    return 0;
}