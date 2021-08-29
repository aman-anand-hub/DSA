//ceil-recipt problem codechef(beg)

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int a[12];
    for (int i = 0; i < 12; i++)
    {
        a[i]=pow(2,i);
    }

    while (t--)
    {
        int p;
        cin>>p;
        int count=0;

        while (p>0)
        {
            for (int i = 11; i>=0; i--)
            {
                if (p>=a[i])
                {
                    p = p-a[i];
                    i++;
                    count++;
                }
                
            }
                
            
        }
        cout<<count<<endl;
    }   
    return 0;
}