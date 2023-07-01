#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> v(n);
    int res1=0,res2=0,XOR=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        XOR^=v[i];
    }
    int sn=(XOR&(~(XOR-1))); //to get the LSB
    for(int i=0;i<n;i++)
    {
        if((v[i]&sn)!=0) res1^=v[i];
        else res2^=v[i];
    }
    cout<<res1<<' '<<res2<<endl;
}