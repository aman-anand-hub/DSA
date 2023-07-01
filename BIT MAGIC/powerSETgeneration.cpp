#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin>>s;
    int n=s.length();
    for(int i=0;i<(1<<s.length());i++)
    {
        for(int j=0;j<s.length();j++)
        {
            if(i&1<<j) cout<<s[j];
        }
        cout<<endl;
    }
}