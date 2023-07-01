#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n; 
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int max_so_far=INT_MIN;
    int max_ending_here=v[0];
    for(int i=1;i<n;i++)
    {
        max_ending_here=max(max_ending_here+v[i],v[i]);
        max_so_far=max(max_ending_here,max_so_far);
    }
    cout<<endl<<max_so_far<<endl;
}