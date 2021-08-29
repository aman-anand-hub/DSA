#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"enter array size: "<<endl;
    int count;
    cin>>count;
    int a[count];
    cout<<"enter the array: "<<endl;
    for (int i = 0; i < count; i++)
    {
        cin>>a[i];
    }
    int i=0, j=count-1;
    while (i<=j)
    {
        if (a[i]<0 && a[j]>0)
        {
            swap(a[i],a[j]);
            i++;j--;
        }
        else if(a[i]>0 && a[j]<0)
        {
            i++;j--;
        }
        else if (a[i]>0)
        {
            i++;
        }
        else if (a[j]<0)
        {
            j--;
        }
    }
    int k=0;
    while (k<count && i<count)
    {
        if (a[k]>0)
        {
            swap(a[k],a[i]);
            k += 2;
            i++;
        }
        else
        {
            k++;
        }
    }
    cout<<endl<<"req array is: "<<endl;
    for (int i = 0; i < count; i++)
    {
        cout<<a[i]<<endl;
    }
    
    return 0;
}