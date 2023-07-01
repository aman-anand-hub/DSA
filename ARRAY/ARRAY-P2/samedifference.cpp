/* 
   Q.
         a[j] - a[i] = j - i, where j>i
          count number of pairs in the array of (i,j)


         */

#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    int t;
    cout<<"enter the number of test cases"<<endl;
    cin>>t;
    int ans;
    while (t--)
    {
        int n,z;
        cin>>n;
        int a[n];
        unordered_map <long,long> umap;
        for (long i = 0; i < n; i++)
        {
            cin>>a[i];
            umap[a[i]-(i+1)]++;
        }
        ans=0;
        for (auto x:umap)
        {
            long z =x.second;
            ans = ans+z*(z-1)/2;
        }
        cout<<ans<<endl;    
    }
    return 0;
}