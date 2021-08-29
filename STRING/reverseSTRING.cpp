#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int left(string s, string t, int i, int x)
{
    while (x<=t.length() && i>=0)
    {
        if(t[x]==s[i])
        {
            x++;
            i--;
        }
        else
        {
            break;
        }

        if(x==t.length())
        {
            return 1;
        }
    }
        
    return 0;
}

int right(string s, string t, int i, int x)
{
    if(x==t.length())
    {
        return 1;
    }
    if(x+1==t.length())
    {
        if(x==t.length())
        {
            return 1;
        }
        else if(i-1>=0 && s[i-1]==t[x])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int r1=0, r2=0;
    if(i-1>=0 && s[i-1]==t[x])
    {
        r1=left(s, t, i-1, x);
        if(r1)
        {
            return 1;
        }
        if(i+1<s.length() && s[i+1]==t[x])
        {
            r2=right(s, t, i+1, x+1);
        }   
    }
    return (r1||r2);
}

int main()
{
    cout<<"enter the two strings: "<<endl;
    string s, t;
    cin>>s>>t;
    int f=0;
    for (int  i = 0; i < s.length(); i++)
    {
        if(s[i]==t[0])
        {
            f=right(s, t, i, 1);
            if(f==1)
            {
                break;
            }
        }
    }
    if(f)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}