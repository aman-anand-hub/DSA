#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
void solve()
{
   ll n;cin>>n;
   vector<ll> a(n);
   for(int i=0;i<n;i++) {
       cin>>a[i];
   }
   string s;cin>>s;
   for(int i=0;i<n;i++){
       if(a[i]<0 && s[i]=='B'){
           cout<<"NO"<<endl;return;
       }
       else if(a[i]>n && a[i]=='R'){
           cout<<"NO"<<endl;return;
       }
   }
    vector<ll> blue,red;
    for(int i=0;i<n;i++)
    if(s[i]=='B') blue.push_back(a[i]);
    else red.push_back(a[i]);

    sort(blue.begin(),blue.end());
    sort(red.begin(),red.end());
    ll i=0,j=0;
    ll cnt = 1;
    bool ok = 1;
    while(i<blue.size() && j<red.size()){
        if(blue[i]>=cnt) i++;
        else if(red[j]<=cnt)  j++;
        else{
            ok = 0;
            break;
        }
        cnt++;
    }

    if(ok==0){
        cout<<"NO"<<endl;return;
    }

    while(j<red.size()){
        if(red[j]>cnt){
            ok = 0; break;
        }
        cnt++;
        j++;
    }

    if(ok==0){
        cout<<"NO"<<endl;return;
    }

    while(i<blue.size())
    {
        if(blue[i]<cnt) {
            ok = 0; break;
        }
        cnt++;
        i++;
    }
    if(ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);
  int t=1;cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}