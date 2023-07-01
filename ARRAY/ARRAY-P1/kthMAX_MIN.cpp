#include<iostream>
using namespace std;

void merge(int arr[], int l, int m , int r){
    int n1= m-l+1;
    int n2= r-m;
    int L[n1], R[n2];
    for (int  i = 0; i < n1; i++)
    {
        L[i]= arr[l+i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j]= arr[m+j+1];
    }
    int i=0;
    int j=0;
    int k=l;
    while (i<n1 && j<n2)
    {
        if (L[i]<=R[j])
        {
            arr[k]= L[i];
            i++;
            k++;
        }
        else{
            arr[k]= R[j];
            j++;
            k++;
        }
    }
    while (i<n1)
    {
        arr[k]= L[i];
        i++;
        k++;
    }
    while (j<n2)
    {
        arr[k]= R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[],int l , int r){
    if (l>=r)
    {
        return;
    }
    
    int m = l+(r-l)/2;

    mergeSort(arr, l, m);
    mergeSort(arr, m+1, r);

    merge(arr, l, m ,r);
}

int main(){
    int count;
    cout<<"Enter the array size: "<<endl;
    cin>>count;
    int a[count];
    for (int i = 0; i < count; i++)
    {
        cout<<"Enter "<<i+1<<"th element: "<<endl;
        cin>>a[i];
    }
    mergeSort(a, 0, count);
    cout<<"Sorted array is: "<<endl;
    for (int  i = 0; i < count; i++)
    {
        cout<<a[i]<<endl;
    }
    int k;
    cout<<"enter k: "<<endl;
    cin>>k;
    if (k>count || k==0)
    {
        cout<<"invalid input"<<endl;
    }
    else{
        cout<<k<<"th maximum is: "<<a[count-k]<<endl;
        cout<<k<<"th minimum is: "<<a[k-1]<<endl;
    }
    return 0;
}
