#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <long long> A(n+5,0);
    long long s=0,s_dash=0;
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
        s+=A[i];
    }
    if(s&1) 
    {
        cout<<"NO"<<endl;
        return 0;
    }
    unordered_map<long long, int> first, second;
    first[A[0]]= 1;
    for (int i = 1; i < n; i++)
    {
        second[A[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        s_dash+=A[i];
        if(s_dash==s/2)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        if(s_dash<s/2)
        {
            long long x= s/2-s_dash;
            if(second[x]>0)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else
        {
            long long y= s_dash-s/2;
            if(first[y]>0)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }

        first[A[i+1]]++;
        second[A[i+1]]--;
    }  
    cout <<"NO"<<endl;

    return 0;
}
/* in the condition 
  if(s&1) --> at last computer converts every thing into binary eqivalent and binary eqivalent of a odd number is always enda with 1, whereas binary eqivalent of a even number always ends with 0. then--> (xyz0 & 0001)->false-> for even number  
    -->   (xyz1 & 0001)->true-> for odd number
*/    