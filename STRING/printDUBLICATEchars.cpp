#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printDublicate(string s)
{
    int n = s.length();
    unordered_map<char, int> map;
    for (int i = 0; i < n; i++)
    {
        map[s[i]]++;
    }
    for (auto x: map)
    {
        if (x.second > 1)
        {
            cout<<x.first<<", count "<<x.second<<endl;
        }
    }
    
}

int main()
{
    cout<<"enter string: "<<endl; string s; cin>>s;
    printDublicate(s);

    return 0;
}