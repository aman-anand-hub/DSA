#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int firstNonRepeating(string s)
{
    int fi[256];
    for (int i = 0; i < 256; i++)
    {
        fi[i]=-1;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if(fi[s[i]]==-1)
        {
            fi[s[i]]=i;
        }
        else
        {
            fi[s[i]]=-2;
        }
    }
    int res= INT_MAX;
    for (int i = 0; i < 256; i++)
    {
        if(fi[i]>=0)
        {
            res = min(res, fi[i]);
        }
    }
    if(res==INT_MAX)
    {
        return -1;
    }
    else
    {
        return res;
    }
}

int main()
{
    cout<<"enter the string: "<<endl;
    string s;
    cin>>s;
    int index=firstNonRepeating(s);
    if(index==-1)
    {
        cout<<"no such index exists."<<endl;
    }
    else
    {
        cout<<"first non repeting character: "<<s[index]<<endl;
    }
    
    return 0;
}