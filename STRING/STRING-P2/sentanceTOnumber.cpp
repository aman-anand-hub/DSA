#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string relevantNumber(string s[], string input)
{
    int n= input.size();
    string output="";

    for (int i = 0; i < n; i++)
    {
        if(input[i]== ' ')
        {
            output= output+"0";
        }
        else
        {
            int position = input[i]-'A'; 
            // since we are subtracting A implies that, input string must be also in capital.
            output= output + s[position];
        }
    }
    return output;
}

int main()
{
    string s[]= {"2","22","222","3","33","333","4","44","444","5","55","555","6","66","666","7","77","777","7777","8","88","888","9","99","999","9999"};
    string input= "AMAN IN4MALS SOCIETY";
    cout<<relevantNumber(s, input);

    return 0;
}