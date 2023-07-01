#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int occurance(string s, int index)
{
    unordered_map<char, int> occ;
    for (int i = 0; i < s.length(); i++)
    {
        occ[s[i]]++;
    }
    int count=-1;
    for (auto x: occ)
    {
        if(x.first == s[index])
        {
            count= x.second;
        }
    }
    return count;
}

int main()
{
    string s; cout<<"enter the string: "<<endl;
    cin>>s;
    int idx; cout<<"enter index of character of which occurance is to be found: "<<endl;
    cin>>idx;
    int ans = occurance(s, idx);
    if(ans ==-1)
    {
        cout<<"error, no such index exisits."<<endl;
    }
    else
    {
        cout<<"count of occurance of "<<s[idx]<<" is "<<ans<<endl;
    }

    return 0;
}