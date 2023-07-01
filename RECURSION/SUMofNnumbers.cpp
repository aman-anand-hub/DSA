#include<bits/stdc++.h>
using namespace std;

int sumN(int n)
{
    if(n<=1) return n;
    else return n+sumN(n-1);
}

int main()
{
    int n; cin>>n;
    cout<<sumN(n)<<endl;
}