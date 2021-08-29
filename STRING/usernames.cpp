#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

void username(string s)
{
    bool flag=true;
    for (int i=0; i<s.length()-1; i++) 
    {
        if (s[i] <= s[i+1]) 
        {
            continue;
        }
        else {
        flag=false;
        break;
        }
    }
    if (flag==false) {
    cout<<"YES"<<endl;
    }
    else {
    cout<<"NO"<<endl;
    }
}

int main()
{
    string s; cin>>s;
    username(s);
    
    return 0;
}