#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
int main()
{
    fastio 
    int t; cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<string> words(n);
        for(int i=0;i<n;i++) cin>>words[i];
        unordered_map<char,int> map[n];
        for(int i=0;i<n;i++)
        {
            string t=words[i];
            int len=t.length();
            for(int i=0;i<len;i++)
            {
                map[i][t[i]]++;
            }
        }
        
    }
}