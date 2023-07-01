#include<bits/stdc++.h>
using namespace std;

void GenSubs(string s, string curr, int i)
{
    if(i==s.length())
    {
        cout<<curr<<endl;
        return;
    }
    GenSubs(s,curr,i+1);
    GenSubs(s,curr+s[i],i+1);
}

int main()
{
    string s; cin>>s;
    GenSubs(s,"",0);
}