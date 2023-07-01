#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
int main()
{
    fastio
    int t; cin>>t;
    while(t--)
    {
        int x1,y1,x2,y2,x3,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        if(y1==y2&&y3<y1)
        {
            cout<<abs(x2-x1)<<endl;
        }
        else if(y2==y3&&y1<y2)
        {
            cout<<abs(x3-x2)<<endl;
        }
        else if(y3==y1&&y2<y1)
        {
            cout<<abs(x3-x1)<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
}