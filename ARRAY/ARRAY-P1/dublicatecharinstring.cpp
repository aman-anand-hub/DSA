#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"enter string: "<<endl;
    string s;
    cin>>s;
    unordered_map<char, int> m;
    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }
    cout<<"dublicate chars are: "<<endl;
    for (auto x: m)
    {
        if (x.second > 1)
        {
            cout<<x.first<<endl;
        }
    }
    return 0;   
}