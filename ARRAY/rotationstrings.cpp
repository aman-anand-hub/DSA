#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isRotation(string s1, string s2){
    if (s1.length() != s2.length())
    {
        return false;
    }

    string temp = s1+s1; 
    return (temp.find(s2) != string::npos);
}

int main(){
    string s1,s2;
    cout<<"enter string 1: "<<endl;
    cin>>s1;
    cout<<"enter string 2: "<<endl;
    cin>>s2;
    if (isRotation(s1, s2))
    {
        cout<<"yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    

    return 0;
}