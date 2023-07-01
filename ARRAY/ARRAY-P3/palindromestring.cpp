#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"enter string: "<<endl;
    cin>>s;
    int i=0,j=s.length()-1;
    while (i<j)
    {
        if (s[i] != s[j])
        {
            cout<<"No"<<endl;
            goto l1;
        }
        i++,j--;
    }
    cout<<"Yes"<<endl;
    l1:
    
    return 0;
}