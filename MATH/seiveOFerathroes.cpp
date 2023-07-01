#include<bits/stdc++.h>
using namespace std;

void seive(int n)
{
    if(n<=1) return;
    bool isPrime[n+1];
    memset(isPrime,true,n+1);
    for(int i=2;i*i<=n;i++)
    {
        if(isPrime[i])
        {
            for(int j=2*i;j<=n;j+=i)
            isPrime[j]=false;
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(isPrime[i]) cout<<i<<' ';
    }
    cout<<endl;
}

int main()
{
    int n; cin>>n;
    seive(n);
}