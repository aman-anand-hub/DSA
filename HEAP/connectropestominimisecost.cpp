#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n; 
        vector<int> v;
        priority_queue<int,vector<int>,greater<int>> mn;
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            v.push_back(x);
            mn.push(x);
        }
        int cost=0;
        while(mn.size()>1)
        {
            int len=0;
            len+=mn.top();
            mn.pop();
            len+=mn.top();
            mn.pop();
            mn.push(len);
            cost+=len;
        }
        cout<<cost<<endl;
    }
}