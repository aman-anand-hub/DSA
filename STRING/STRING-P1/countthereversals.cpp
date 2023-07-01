#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int countReversals(string s)
{
    if(s.length()%2!=0)
    {
        return -1;
    }

    stack<char> st;
    int c=0;
    int c2=0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='{')
        {
            c++;
        }
        else if(s[i]=='}' && st.top()=='{')
        {
            st.pop();
            c--;
        }
        else
        {
            c2++;
        }
    }
    if(c%2!=0)
    {
        c= (c) +1;
    }
    else
    {
        c= c/2;
    }

    if(c2%2!=0)
    {
        c2=(c2/2)+1;
    }
    else
    {
        c2=c2/2;
    }   
    return c+c2;    
}

int main()
{
    string s;
    cout<<"enter string: "<<endl;
    cin>>s;
    int ans= countReversals(s);
    cout<<ans;

    return 0;
}