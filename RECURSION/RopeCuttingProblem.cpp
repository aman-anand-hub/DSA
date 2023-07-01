#include<bits/stdc++.h>
using namespace std;
 
int Ropecutting(int n, int a, int b, int c)
{
    if(n==0) return 0;
    if(n<0) return -1;
    int res=max(Ropecutting(n-a,a,b,c),max(Ropecutting(n-b,a,b,c),Ropecutting(n-c,a,b,c)));
    if(res==-1) return -1;
    return 1+res;
}

int main()
{
    int n,a,b,c; cin>>n>>a>>b>>c;
    cout<<Ropecutting(n,a,b,c)<<endl;
}