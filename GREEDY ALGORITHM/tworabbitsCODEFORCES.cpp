#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test; cin>>test;
    while (test--)
    {
        int x,y,a,b; cin>>x>>y>>a>>b;
        int t;
        if(x<y)
        {
            if((y-x)%(a+b)!=0)
            {
                cout<<-1<<endl;
            }
            else
            {
                t= (y-x)/(a+b);
                cout<<t<<endl;
            }
        }
    }
    return 0;
}