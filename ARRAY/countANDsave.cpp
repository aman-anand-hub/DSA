#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string countandsay(int n){
    if (n==1)
    {
        return "1";
    }
    if (n==2)
    {
        return "11";
    }
    string s= "11";
    for (int i = 3; i <= n; i++)
    {
        int cnt =1;
        string tmp ="";
        s+= "$";
        int len =s.length();
        for (int j = 1; j < len; j++)
        {
            if (s[j] != s[j-1])
            {
                tmp += to_string(cnt);
                tmp += s[j-1];
                cnt =1;
            }
            else{
                cnt++;
            }    
        }
        s = tmp;
    }
    return s;
}

int main(){
    cout<<"enter the number: "<<endl;
    int n;
    cin>>n;
    cout<<countandsay(n)<<endl;
}