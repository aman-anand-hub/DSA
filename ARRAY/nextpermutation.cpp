#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& a){
    int n= a.size();
    int idx = -1;
    for (int i = n-1; i >0; i--)
    {
        if (a[i-1]<a[i])
        {
            idx=i;
            break;
        }
    }
    if (idx == -1)
    {
        reverse(a.begin(), a.end());
    }
    else{
        int prev = idx;
        for (int i = idx+1; i < n; i++)
        {
            if (a[idx-1]<a[i] && a[i] < a[prev])
            {
                prev = i;
            }
        }
        swap(a[idx-1], a[prev]);
        reverse(a.begin()+idx, a.end());
    }   
}

int main(){
    cout<<"enter the size of number: "<<endl;
    int count;
    cin>>count;
    int input;
    vector <int> v;
    cout<<"enter the number: "<<endl;
    for (int i = 0; i < count; i++)
    {
        cin>>input;
        v.push_back(input);
    }
    nextPermutation(v);
    cout<<"next permutation of the number will be: "<<endl;
    for (int i = 0; i < count; i++)
    {
        cout<<v[i];
    }
    cout<<endl;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout<<*it;
    }
    return 0;
}