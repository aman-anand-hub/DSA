#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void vac(char* s)
{
    int count_vowels=0, count_consonents=0;
    for (int i = 0; s[i]!= '\0'; i++)
    {
        char ch = s[i];
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            count_consonents++;
        }
        else if(ch == ' ')
        {
            continue;
        }
        else
        {
            count_vowels++;
        }
    }
    if(count_vowels>0 || count_consonents>0)
    {
        cout<<"vowels in the string: "<<count_vowels<<endl;
        cout<<"consonents in the string are: "<<count_consonents<<endl;
    }
    else
    {
        cout<<"string is empty. hence, count of both vowels and consonents both are zero"<<endl;
    }
}

int main()
{
    char* s = "geeksforgeeks";
    vac(s);

    return 0;
}