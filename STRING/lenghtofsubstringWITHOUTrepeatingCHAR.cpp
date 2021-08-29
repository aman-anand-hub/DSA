#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int lenSubstr(string s)
{
    int start=-1, max_len=0;
    vector <int> vis(256, -1);
    for (int i = 0; i < s.length(); i++)
    {
        if(vis[s[i]] > start)
        {
            start = vis[s[i]];
        }
        vis[s[i]]=i;
        max_len = max(max_len, i-start);
    }
    return max_len;
}

int main()
{
    string s;
    cout<<"enter the string: "<<endl;
    cin>>s;
    cout<<lenSubstr(s);

    return 0;
}