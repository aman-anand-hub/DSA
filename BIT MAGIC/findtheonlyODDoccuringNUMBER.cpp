#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    /*
        PROPERTIES OF XOR OPERATION:
        * x^0=x
        *x^y=y^x
        *x^(y^z)=(x^y)^z
        *x^x=0
    */
   int res=0;
   for(int i=0;i<n;i++)
   {
       res^=v[i];
   }
   cout<<res<<endl;
}