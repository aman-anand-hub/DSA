#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        /* code */
        int n; cin>>n;
        vector<int> v(n);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=(v[i]-1);
        }
        if(sum%2!=0)
        {
            cout<<"errorgorn"<<endl;
        }
        else
        {
            cout<<"maomao90"<<endl;
        }
    }
    return 0;
}