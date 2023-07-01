#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[], int arr2[], int n, int m){
    int i=0;
    while (arr1[n-1] > arr2[0])
    {
        if (arr1[i] > arr2[0])
        {
            swap(arr1[i], arr2[0]);
            sort(arr2, arr2+m);
        }
        i++;
    }
}

int main(){
    cout<<"enter sizes of each array: "<<endl;
    int n, m;
    cin>>n>>m;
    int L[n], R[m];
    cout<<"enter 1st sorted array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>L[i];
    }
    cout<<"enter 2nd sorted array: "<<endl;
    for (int j = 0; j < m; j++)
    {
        cin>>R[j];
    }

    merge(L, R, n, m);
    cout<<"your merged array's are: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<L[i]<<endl;
    }
    for (int j = 0; j < m; j++)
    {
        cout<<R[j]<<endl;
    }
    return 0;
}