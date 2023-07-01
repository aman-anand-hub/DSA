#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        int sum=25*(s[0]-'a');
        if(s[0]>s[1]) sum+=s[1]-'a'+1;
        else sum+=s[1]-'a';
        cout<<sum<<endl;
    }
    return 0;
}