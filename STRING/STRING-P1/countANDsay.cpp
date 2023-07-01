#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string countAndSay(int n)
{
    if (n==1)
    {
        return "1";
    }
    if (n==2)
    {
        return "11";
    }
    string s = "11";
    for (int i = 3; i <= n; i++)
    {
        int count = 1;
        string temp = "";
        s+='$';
        int len = s.length();
        for (int j = 1; j < len; j++)
        {
            if (s[j]!=s[j-1])
            {
                temp += to_string(count);
                temp += s[j-1];
                count =1;
            }
            else
            {
                count++;
            }
        }
        s= temp;
    }
    return s; 
}

int main()
{
    int number; cout<<"enter number: "<<endl; cin>>number;
    cout<<countAndSay(number)<<endl;

    return 0;
}