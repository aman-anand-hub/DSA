#include<bits/stdc++.h>
using namespace std;

void printegeption(int nm, int dm)
{
    if(nm==0 || dm==0)
    {
        return;
    }
    if(dm%nm==0)
    {
        cout<<"1/"<<dm/nm;
        return;
    }
    if(nm%dm==0)
    {
        cout<<nm/dm;
        return;
    }

    if(nm>dm)
    {
        cout<<nm/dm<<" + ";
        printegeption(nm%dm, dm);
        return;
    }
    // case when, dm>nm
    int n= dm/nm +1;
    cout<<"1/"<<n<<" + ";
    printegeption(n*nm-dm, n*dm);   
}

int main()
{
    int nm, dm;
    cout<<"enter the numerator and demoninator respictely: "<<endl;
    cin>>nm>>dm;
    cout<<"EGIPTION FRACTION OF THE FRACTION IS: ";
    printegeption(nm, dm);

    return 0;
}