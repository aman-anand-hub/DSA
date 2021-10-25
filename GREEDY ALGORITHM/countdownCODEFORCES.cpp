#include<bits/stdc++.h>
using namespace std;

void countdown(string s, int n)
{
    if(n==0)
    {
        return;
    }
    int ans= 0;
    for(int i=0; i<n; i++)
    {
        ans= ans+ (s[i]-'0');
    }
    int temp= 0;

    for (int i = 0; i < n; i++)
    {
        if(s[i]-'0'!=0)
        {
            temp++;
        }
    }
    ans= ans+temp;

    cout<<"minimum number of ways are: "<<ans<<endl;
}

int main()
{
    cout<<"enter the string: "<<endl;
    string s;
    cin>>s;
    int n= s.length();
    countdown(s, n);

    return 0;
}