#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isRotation(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return false;   
    }

    string temp = s1+s1;
    return (temp.find(s2) != string::npos);
}

int main()
{
    string s1,s2; cout<<"enter the strings: "<<endl; cin>>s1>>s2;
    if(isRotation(s1, s2))
    {
        printf("is rotaion\n");
    }
    else
    {
        cout<<"is not rotation"<<endl;
    }

    return 0;
}