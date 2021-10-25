#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        priority_queue <pair<int, int>> pq;
        for (int i = 1; i <=n; i++)
        {
            int x;
            cin>>x;
            if(x>0)
            {
                pq.push({x, i});
            }
        }
        vector<pair<int, int>> ans;
        while (pq.size()>1)
        {
            auto f= pq.top();
            pq.pop();
            auto s= pq.top();
            pq.pop();
            ans.push_back({f.second, s.second});
            f.first--;
            s.first--;
            if(f.first>0)
            {
                pq.push(f);
            }
            if(s.first>0)
            {
                pq.emplace(s);
            }
        }
        cout<<ans.size()<<endl;
        for (auto i: ans)
        {
            cout<<i.first<<' '<<i.second<<endl;
        }
        
    }
    return 0;
}