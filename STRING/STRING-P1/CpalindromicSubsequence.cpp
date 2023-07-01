#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int dp[100][100];
string s="abca";

int countPS(int i, int j)
{
    if(i>j)
    {
        return 0;
    }
    if(i==j)
    {
        return 1;
    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    else if(s[i]==s[j])
    {
        return dp[i][j]= countPS(i+1,j)+countPS(i,j-1)+1;
    }
    else
    {
        return dp[i][j]= countPS(i+1,j)+countPS(i,j-1)-countPS(i+1,j-1);
    }
}

int main()
{
    memset(dp, -1, sizeof(dp));
    int n= s.length();
    cout<<"count of palindromic subsequence are: "<<countPS(0,n-1);

    return 0;
}