#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int count1, count2;
    cout<<"enter sizes of both array's respectively: "<<endl;
    cin>>count1>>count2;
    int a[count1], b[count2];
    cout<<"enter elements of array 1: "<<endl;
    for (int i = 0; i < count1; i++)
    {
        cin>>a[i];
    }
    cout<<"enter elements of array 2: "<<endl;
    for (int  i = 0; i < count2; i++)
    {
        cin>>b[i];
    }
    unordered_map< int, int> umap;
    for (int i = 0; i < count1; i++)
    {
        umap[a[i]]++;
    }
    for (int i = 0; i < count2; i++)
    {
        umap[b[i]]++;
    }
    cout<<"union of array's are: "<<endl;
    cout<<umap.size()<<endl;
    cout<<"Namely: "<<endl;
    for (auto it: umap)
    {
        cout<<it.first<<endl;
    }

    int count=0;
    for (auto it: umap)
    {
        if (it.second>1)
        {
            count++;
        }
    }
    cout<<"intersecting elements are: "<<endl<<count<<endl<<"namely"<<endl;
    for (auto it: umap)
    {
        if (it.second>1)
        {
           cout<<it.second<<endl;
        }
    }
    return 0;
}