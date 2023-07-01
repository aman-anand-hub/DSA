#include<iostream>
using namespace std;

void rotationArray(int a[], int count,  int n){
    
    if (n<=0)
    {
        return;
    }
    
    while (n--)
    {
        int temp =a[count-1];
        for (int  i = count-1; i >0; i--)
        {
            a[i]=a[i-1];
        }
        a[0]= temp;
        
    }
}

int main(){
    int count;
    cout<<"array size: "<<endl;
    cin>>count;
    int a[count];
    cout<<"enter array: "<<endl;
    for (int i = 0; i < count; i++)
    {
        cin>>a[i];
    }
    int n;
    cout<<"enter rotation number: "<<endl;
    cin>>n;
    rotationArray(a, count, n);
    cout<<"final rotated array is: "<<endl;
    for (int i = 0; i < count; i++)
    {
        cout<<a[i]<<endl;
    }   
    return 0;
}