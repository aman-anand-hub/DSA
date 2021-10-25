#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int boys[n];
    for(int i=0; i<n; i++) cin>>boys[i];
    int m; cin>>m;
    int girls[m];
    for(int i=0; i<m; i++) cin>>girls[i];
    sort(boys, boys+n);
    sort(girls, girls+m);
    int p1=0, p2=0, pairs=0;
    while (p1<n && p2<m)
    {
        if(boys[p1]<girls[p2] && girls[p2]-boys[p1]!=1)
        {
            p1++;
        }
        else if(girls[p2]<boys[p1] && boys[p1]-girls[p2]!=1)
        {
            p2++;
        }
        else
        {
            p1++, p2++, pairs++;
        }
    }
    cout<<pairs<<endl;
    return 0;
}