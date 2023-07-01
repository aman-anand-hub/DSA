#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
        cout<<"Enterthe number of test cases: "<<endl;
    int t;
    cin>>t;
    unordered_map <string, int> reg;
    string s;
    for (int i = 0; i < t; i++)
    {
        cout<<"enter the "<<i+1<<"th string"<<endl;
        cin>>s;
        if(reg[s]==0)
        {
            cout<<"OK"<<endl;
            reg[s]=1;
        }
        else{
            cout<<s<<reg[s]<<endl;
            reg[s]++;
        }
    }
    return 0;
}