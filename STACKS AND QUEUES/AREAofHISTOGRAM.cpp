#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        vector<int> ntl;
        stack<pair<int,int>> s1;
        for(int i=0;i<n;i++)
        {
            if(s1.size()==0) ntl.push_back(-1);
            else if(s1.size()>0 && s1.top().first<v[i]) ntl.push_back(s1.top().second);
            else if(s1.size()>0 && s1.top().first>v[i])
            {
                while(s1.size()>0 && s1.top().first>v[i])
                {
                    s1.pop();
                }
                if(s1.size()==0) ntl.push_back(-1);
                else ntl.push_back(s1.top().second);
            }    
            s1.push({v[i],i});
        }
        vector<int> ntr;
        stack<pair<int,int>> s2;
        for(int i=n-1;i>=0;i--)
        {
            if(s2.size()==0) ntr.push_back(n);
            else if(s2.size()>0 && s2.top().first<v[i])
            {
                ntr.push_back(s2.top().second);
            }
            else if(s2.size()>0 && s2.top().first>v[i])
            {
                while(s2.size()>0 && s2.top().first>v[i])
                {
                    s2.pop();
                }
                if(s2.size()==0) ntr.push_back(n);
                else ntr.push_back(s2.top().second);
            }
            s2.push({v[i],i});
        }
        //always remember to reverse the vector when we operate from right to left;
        reverse(ntr.begin(),ntr.end());
        //for(int x:ntr) cout<<x<<' ';cout<<endl;
        //for(int x:ntl) cout<<x<<' ';cout<<endl; 
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int dif=ntr[i]-ntl[i]-1;
            ans=max(ans,v[i]*dif);
        }
        cout<<ans<<endl;
    }
}