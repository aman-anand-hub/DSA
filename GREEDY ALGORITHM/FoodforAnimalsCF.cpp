#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a,b,c,x,y; cin>>a>>b>>c>>x>>y;
        int fd=a+c;
        int rems= a+c-x;
        int rems2= (a-x)>=0? (b+c):(b+c-(x-a));
        rems2=rems2-y;
        if(rems>=0 && rems2>=0)
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