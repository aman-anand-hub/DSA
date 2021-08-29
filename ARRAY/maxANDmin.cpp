#include<iostream>
using namespace std;

int max_array(int arr[], int n){
    int max= arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}

int min_array(int arr[], int n){
    int min= arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}

int main(){
    cout<<"enter the array size: "<<endl;
    int count;
    cin>>count;
    int a[count];
    for (int i = 0; i < count; i++)
    {
        cout<<"enter "<<i+1<<"th element: "<<endl;
        cin>>a[i];
    }
    cout<<"MAX is "<<max_array(a, count)<<" and MIN is "<<min_array(a, count)<<endl;

    return 0;
}