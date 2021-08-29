#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> prefix_Function(string s)
{
    int n= s.length();
    vector<int> pi(n,0);

    for (int i = 1; i < n; i++)
    {
        int j= pi[i-1];
        while(j>0 && s[i]!=s[j])
        {
            j= pi[j-1];
        }
        if(s[i]==s[j])
        {
            j++;
        }
        pi[i]=j;
    }
    return pi;
}

int main()
{
    string s;
    cout<<"Enter the string: "<<endl;
    cin>>s;
    vector<int> prefix =prefix_Function(s);
    cout<<prefix.at(s.length()-1);

    return 0;
}