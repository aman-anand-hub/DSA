#include<bits/stdc++.h>
using namespace std;
#define long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin>>n;
    string s; char c;
    int x,left=-1e9-10, right=1e9+10;
    while (n--)
    {
        cin>>s>>x>>c;
        if((s==">"&&c=='Y')||(s=="<="&&c=='N'))
        {
            left=max(x+1,left);
        }
        if((s=="<"&&c=='Y')||(s==">="&&c=='N'))
        {
            right=min(x-1,right);
        }
        if((s==">="&&c=='Y')||(s=="<"&&c=='N'))
        {
            left=max(x,left);
        }
        if((s=="<="&&c=='Y')||(s==">"&&c=='N'))
        {
            right=min(x,right);
        }
    }
    if(left<=right)
    {
        cout<<left<<endl;
    }
    else
    {
        cout<<"Impossible"<<endl;
    }
    return 0;
}