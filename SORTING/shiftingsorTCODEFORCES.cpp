#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<vector<int>> v;
        for (int i = 1; i<n; i++)
        {
            bool ok=1; int l=-1,r=-1;
            for (int j = 0; j<i; j++)
            {
                if(a[j]>a[i])
                {
                    ok=0;r=j;
                    if(l==-1) l=j;
                }
            }
            if(ok==0)
            {
                v.push_back({l+1,i+1,r-l+1});
                vector<int> c;
                for (int k=l;k<=i;k++) c.push_back(a[k]);
                b=a;
                int d=i-l+1, s=r-l+1, f=0;;
                for (int k = l; k<=i; k++)
                {
                    b[k]= c[(f+s)%d];
                    f++;
                }
                a=b;
            }
        }
        cout<<v.size()<<endl;
        for(auto x:v) cout<<x[0]<<' '<<x[1]<<' '<<x[2]<<endl;
    }
    return 0;
}