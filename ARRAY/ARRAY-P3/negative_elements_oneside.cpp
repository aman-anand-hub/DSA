#include<iostream>
using namespace std;

int main(){
    cout<<"enter array size:"<<endl;
    int count;
    cin>>count;
    int arr[count];
    cout<<"enter the element of the array: "<<endl;
    for (int i = 0; i < count; i++)
    {
        cin>>arr[i];
    }
    int k=0;
    for (int i = 0; i < count; i++)
    {
        if (arr[i]<0)
        {
            swap(arr[k],arr[i]);
            k++;
        }
    }
    cout<<endl<<"required array is:"<<endl;

    for (int i = 0; i < count; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}