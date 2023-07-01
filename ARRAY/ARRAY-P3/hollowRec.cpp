#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,b; cin>>l>>b;
    for(int i=0;i<l;i++)
    {
        cout<<'*';
    }
    cout<<endl;
    for(int i=1;i<b-1;i++)
    {
        for(int j=0;j<l;j++)
        {
            if(j==0)
            {
                cout<<'*';
            }
            else if(j>0 && j<l-1)
            {
                cout<<' ';
            }
            else if(j==l-1)
            {
                cout<<'*';
            }
        }
        cout<<endl;
    }
    for(int i=0;i<l;i++) cout<<'*';
    cout<<endl;
}