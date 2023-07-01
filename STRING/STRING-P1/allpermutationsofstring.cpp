/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swap(char *x, char *y)
{
    char temp= *x;
    *x = *y;
    *y = temp;
}

void permutations(char *s, int l, int r)
{
    if(l==r)
    {
        cout<<s<<endl;
    }
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap((s+l), (s+i));
            permutations(s, l+1, r);
            swap((s+l), (s+i));
        }
    }
}

int main()
{
    char s[] ="abc";
    int n= strlen(s);
    permutations(s, 0, n-1);

    return 0;    
}
*/