#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//enhanced merge sort(count inversion)
long long merge(int arr[], int l, int mid, int r){
    long long inver =0;
    int n1= mid-l+1;
    int n2 = r-mid;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[l+i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = arr[j+mid+1];
    }
    int i=0;
    int j=0;
    int k=l;
    while (i<n1 && j<n2)
    {
        if (L[i] < R[j])
        {
            arr[k] = L[i];
            i++;k++;
        }
        else{
            arr[k] = R[j];
            j++;k++;
            inver += n1-i;
        }
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;k++;
    }
    while (j<n2)
    {
        arr[k] = R[j];
        j++;k++;
    }
    return inver;
}

long long mergeSort(int arr[], int l, int r){
    long long inver =0;
    if(l < r)
    {
        int mid = l+(r-l)/2;
        inver += mergeSort(arr, l, mid);    
        inver += mergeSort(arr, mid+1, r);  
        inver += merge(arr, l, mid ,r); 
    }
    return inver;
}

int main(){
    int count;
    cout<<"enter the size of array: "<<endl;
    cin>>count;
    int a[count];
    cout<<"enter array elements: "<<endl;
    for (int i = 0; i < count; i++)
    {
        cin>>a[i];
    }
    int ans = mergeSort(a, 0, count);
    cout<<"number of inversions occuring is: "<<endl<<ans<<endl;
    

    return 0;
}