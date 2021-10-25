#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int sum1=0, sum2=0;
    int p1=0, p2=size-1;
    int turn=1;
    if(turn<size+1)
    {
        while (p2>=p1)
        {
            if(turn%2!=0)
            {
                if(arr[p1]>arr[p2])
                {
                    sum1+=arr[p1];
                    p1++;
                }
                else
                {
                    sum1+=arr[p2];
                    p2--;
                }
            }
            if(turn%2==0)
            {
                if(arr[p1]>arr[p2])
                {
                    sum2+=arr[p1];
                    p1++;
                }
                else
                {
                    sum2+=arr[p2];
                    p2--;
                }
            }
            turn++; 
        }
    }
    cout<<sum1<<' '<<sum2;

    return 0;
}