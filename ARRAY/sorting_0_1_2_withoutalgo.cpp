#include<iostream>
using namespace std;

int main()
{
    cout<<"enter size of array: "<<endl;
    int count;
    cin>>count;
    int a[count];
    cout<<"enter the elements of the array(only 0's,1's & 2's): "<<endl;
    for (int  i = 0; i < count; i++)
    {
        cin>>a[i];
    }

    int k=0;

    while (k<=count)
    {
        for (int i = 0; i < count; i++)
        {
            if(a[i]==0)
            {
                a[k]= a[i];
                k++;
            }
        }
        
        for (int i = 0; i < count; i++)
        {
            if(a[i]==1)
            {
                a[k]= a[i];
                k++;
            }
        }

        for (int i = 0; i < count; i++)
        {
            if(a[i]==2)
            {
                a[k]= a[i];
                k++;
            }
        }
    }

    for (int i = 0; i < count; i++)
    {
        cout<<a[i]<<endl;
    }
    

    return 0;
}    