#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
int main()
{
    fastio
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int> v,even,odd;
        for (int i=0;i<n;i++)
        {
            int x; cin>>x;
            if(x%2==0) even.push_back(x);
            else odd.push_back(x);
        }
        for(auto i:even) v.push_back(i);
        for(auto i:odd) v.push_back(i);
        int pairs=0;
        for(int i=0;i<n-1;i++)
        {
            for (int j=i+1;j<n;j++)
            {
                if((__gcd(v[i],2*v[j]))>1) pairs++;
            }
        }
        cout<<pairs<<endl;
    }
    return 0;
}