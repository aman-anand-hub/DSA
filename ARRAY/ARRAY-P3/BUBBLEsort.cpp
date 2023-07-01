/*#include<bits/stdc++.h>
using namespace std;
void BubbleSort(vector<int> &v, int n)
{
    int i=0,count=0;
    while(i<n-1)
    {
        if(v[i]>v[i+1])
        {
            swap(v[i],v[i+1]);
            count++;
        }
        i++;
        if(i==n-1)
        {
            if(count==0) break;
            else
            {
                count=0;
                i=0;
            }
        }
    }
}
int main()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    BubbleSort(v,n);
    for(int i=0;i<n;i++) cout<<v[i]<<' ';
}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=0;i<5;)
    {
        cout<<'k';
    }
}