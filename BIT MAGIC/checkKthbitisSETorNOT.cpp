/*
    Kth bit uis from the left is to checked
    Kth is said to be set if it is 1 in its binary form
*/
// using left shift operator
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int k; cin>>k;
    if(n&(1<<(k-1))!=0)
    {
        cout<<"Set Bit"<<endl;
    }
    else
    {
        cout<<"Bit is not set"<<endl;
    }
}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int k; cin>>k;
    if((n>>(k-1))&1!=0)
    {
        cout<<"Set Bit"<<endl;
    }
    else cout<<"Bit is not set"<<endl;
}