#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s, t;
        cin>>s;
        cin>>t;
        int n= s.length();
        int m= t.length();
        int f=1;
        int i=n-1;
        for (int j = m-1; j>=0; j--)
        {
            while (i>=0 && s[i]!=t[j])
            {
                i-=2;
            }
            if(i<0)
            {
                f=0;
                break;
            }
            i-=1;
        }
        if(f)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}