#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> v(n+1);
    int xor_arr=0, xor_all=0;
    for(int i=1;i<=n+1;i++)
    {
        if(i<n+1)
        {
            cin>>v[i];
            xor_arr^=v[i];
        }
        xor_all^=i;
    }
    cout<<"Missing element: "<<(xor_arr^xor_all)<<endl;
}