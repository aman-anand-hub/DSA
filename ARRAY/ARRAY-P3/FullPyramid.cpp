#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int star=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<((2*n-1)/2)-i;j++) cout<<' ';
        int k=star;
        while(k--) cout<<'*';
        star+=2;
        cout<<endl;
    }
}