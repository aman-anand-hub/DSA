#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    int p1=0, p2=n-1;
    int sum_l=arr[0], sum_r=arr[n-1];
    if(n==1)
    {
        cout<<1<<' '<<0<<endl;
    }
    else
    {
        while (p1<p2)
        {
            if(sum_l<sum_r && p2-p1!=1)
            {
                sum_l+=arr[p1+1];
                p1++;
                if(p2-p1==1)
                {
                    break;
                }
            }
            else if(sum_r<sum_l && p2-p1!=1)
            {
                sum_r+=arr[p2-1];
                p2--;
                if(p2-p1==1)
                {
                break;
                }
            }
            else
            {
                if(p2-p1==2)
                {
                    sum_l+=arr[p1+1];
                    p1++;
                }
                else if(p2-p1==1)
                {
                    break;
                }
                else
                {
                    sum_l+=arr[p1+1];
                    sum_r+=arr[p2-1];
                    p1++, p2--;
                }
            }
        }
        cout<<p1+1<<' '<<n-p2<<endl;
    }
    return 0;

}