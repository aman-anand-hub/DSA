#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t; cin>>t;
    while(t--)
    {
        long long n; cin>>n;
        if(n&1 || n<=3) cout<<-1<<endl;
        else
        {
            long long m=n/2;
            long long temp1=m/3;
            if(m%3==1 || m%3==2) temp1++;
            long long temp2=m/2;
            cout<<min(temp1,temp2)<<' '<<max(temp1,temp2)<<endl;
        }
    }
}