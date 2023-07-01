#include<bits/stdc++.h>
using namespace std;

bool checkPal(string s, int start, int end)
{
    if(start>=end) return true;
    else return (s[start]==s[end] && checkPal(s,start+1,end-1));
}

int main()
{
    string s; cin>>s;
    cout<<checkPal(s,0,s.length()-1)<<endl;
}