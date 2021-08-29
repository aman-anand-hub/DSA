#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool subSumZero(int a[], int n){
    unordered_map<int, int> m;
    bool flag = false;
    int s=0;
    for (int i = 0; i < n; i++)
    {
        s = s+ a[i];
        if (m[s] or s==0)
        {
            flag = true;
            break;
        }
        else
        {
            m[s];
        }    
    }
    if (flag)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}

int main(){
    cout<<"enter array size: "<<endl;
    int n;
    cin>>n;
    int a[n];
    cout<<"enter the array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<subSumZero(a, n)<<endl;


    return 0;
}
