#include<bits/stdtr1c++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int L,v,l,r; cin>>L>>v>>l>>r;
        int a=L/v;
        int b=(l-1)/v;
        int c=r/v;
        int d=c-b;
        cout<<a-d<<endl;
    }
    return 0;
}