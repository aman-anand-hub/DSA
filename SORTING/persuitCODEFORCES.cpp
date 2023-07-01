#include <bits/stdc++.h>
#define ll long long
#define lld long double
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fl(i,m,n) for(int i=m;i<n;i++)
#define rl(i,m,n) for(int i=n;i>=m;i--)
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()
#define fast ios_base::sync_with_stdio(false);
#define input cin.tie(NULL);
#define output cout.tie(NULL);
using namespace std;
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
bool sorta(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
bool sortd(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}

void asquare()
{
    ll n,on,m,x,sm=0,sy=0;
    cin>>n;
    on=n;
    ll index,index2;
    vector<int> a(n);
    vector<int> b(n);
    fl(i,0,n)
    cin>>a[i];
    fl(i,0,n)
    cin>>b[i];
    sort(vr(a),greater<int>());
    sort(vr(b),greater<int>());
    fl(i,0,n)
    {
        if(i==0)
        a[i]=a[i];
        else
        a[i]+=a[i-1];
    }
    fl(i,0,n)
    {
        if(i==0)
        b[i]=b[i];
        else
        b[i]+=b[i-1];
    }
    x=n/4;
    x=n-x;
    ll y=x;
    x-=1;
    y-=1;
    sm=0;
    sy=0;
    if(sm+a[x]>=b[y])
    cout<<"0\n";
    else
    {
        while(sm+a[x]<b[y])
        {
            sm+=100;
            n++;
            if(n%4==0)
            {
                if(x!=0)
                x--;
                else
                {
                    a[0]=0;
                    x=0;
                }
            }
            else
            {
                if(y!=on-1)
                y++;
            }
            // cout<<"sm"<<sm<<"\n";
            // cout<<"a"<<a[x]<<"\n";
            // cout<<"b"<<b[y]<<"\n";
            // cout<<"x"<<x<<"\n";
            // cout<<"y"<<y<<"\n";
        }
        cout<<n-on<<"\n";
    }
}
int main()
{
    fast input output
    ll t;
    cin>>t;
    while(t--)
    {
        asquare();
    }
    return 0;
}