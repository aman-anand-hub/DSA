#include <iostream>
#include<bits/stdc++.h>
#define li long long int
using namespace std;
int main()
{
    int t=1;
    while(t--){

       int n,r;
       cin>>n>>r;

        vector<li> v(n,0);
        vector<li> arr(n,0);
        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            arr[i]=k;
            if(k==1)
            {
                for(int j=i;j>=max(0,i-r+1);j--)
                {
                    v[j]++;
                }
                for(int j=i+1;j<=min(n-1,i+r-1);j++){

                    v[j]++;

                }
            }
        }
        bool flag=true;
        for(int i=0;i<n;i++){
            if(v[i]==0){
                flag=false;
                break;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==1){
                bool flag1=false;
                for(int j=i;j>=max(i-r+1,0);j--)
                {
                    if(v[j]<=1)
                    {
                        flag1=true;
                        break;
                    }
                }
                for(int j=i;j<=min(n-1,i+r-1);j++)
                {
                    if(v[j]<=1)
                    {
                        flag1=true;
                        break;
                    }
                }
                if(flag1)
                {
                    ans++;
                }
                else
                {
                    for(int j=i;j>=max(0,i-r+1);j--)
                    {
                        v[j]--;
                    }
                    for(int j=i+1;j<=min(n-1,i+r-1);j++)
                    {
                        v[j]--;
                    }
                }
            }
        }
        if(flag)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }

    return 0;
}