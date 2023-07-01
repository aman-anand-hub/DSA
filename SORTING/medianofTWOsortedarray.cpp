#include<bits/stdc++.h>
using namespace std;

double getmed(vector<int> nums1, vector<int> nums2)
{
    int n1=nums1.size();
    int n2=nums2.size();
    int start=0, end=n1;
    while(start<=end)
    {
        int i1=(start+end)/2;
        int i2=(n1+n2+1)/2-i1;

        int max1=(i1==0 )? INT_MIN:nums1[i1-1];
        int min1=(i1==n1)? INT_MAX:nums1[i1];

        int max2=(i2==0 )? INT_MIN:nums2[i2-1];
        int min2=(i2==n2)? INT_MAX:nums2[i2];

        if(max1<=min2 && max2<=min1)
        {
            if((n1+n2)%2==0)
            {
                return (max(max1,max2)+min(min1,min2))/2.0;
            }
            else
            {
                return max(max1,max2);
            }
        }
        else if(max1>min2)
        {
            end=i1-1;
        }
        else
        {
            start=i1+1;
        }
    }
    return 0.0;
}

int main()
{
    int n1,n2; cin>>n1>>n2;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++) cin>>a[i];
    for(int i=0;i<n2;i++) cin>>b[i];
    cout<<getmed(a,b)<<endl;
}