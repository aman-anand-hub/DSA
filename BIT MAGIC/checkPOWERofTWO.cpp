#include<bits/stdc++.h>
using namespace std;

bool pow(int n)
{
    if(n==0) return false;
    else return ((n&(n-1))==0);
}

int main()
{
    int n; cin>>n;
    if(pow(n)) cout<<"TRUE"<<endl;
    else cout<<"FALSE"<<endl;
}