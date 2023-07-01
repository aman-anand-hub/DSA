#include<bits/stdc++.h>
using namespace std;

int cp(int a, int b)
{
    if(b==0) return 1;
    int temp=cp(a,b/2);
    temp*=temp;
    if(b%2==0) return temp;
    else return a*temp;
}

int main()
{
    int a,b; cin>>a>>b;
    cout<<cp(a,b)<<endl;   
}