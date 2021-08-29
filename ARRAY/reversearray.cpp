#include<iostream>
using namespace std;

void reverse_array(int a[], int n){
    int start= 0, end= n-1;
    while (start < end)
    {
        swap(a[start], a[end]);
        start++;
        end--;
    }
    
}

int main(){
    cout<<"enter the size of the array: "<<endl;
    int count;
    cin>>count;
    int a[count];
    for (int i = 0; i < count; i++)
    {
        cout<<"enter the "<<i+1<<"th element: "<<endl;
        cin>>a[i];
    }
    cout<<endl<<endl<<"Reversed array is: "<<endl;
    reverse_array(a, count);
    for (int j= 0; j < count; j++)
    {
        cout<<a[j]<<endl;
    }

    return 0;
}