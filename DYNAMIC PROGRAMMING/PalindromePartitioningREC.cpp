#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int i=0, j=s.length()-1;
    while(i<j)
    {
        if(s[i]!=s[j]) return false;
        i++;j--;
    }
    return true;
}

int minPar(string s, int i, int j)
{
    if(i==j+1) return 0;
    int ans=INT_MAX;
    for(int k=i;k<=j;k++)
    {
        string temp=s.substr(i,k-i+1);
        if(isPalindrome(temp))
        {
            ans=min(ans,1+minPar(s,k+1,j));
        }
    }
    return ans;
}

int main()
{
    string s; cin>>s;
    cout<<minPar(s,0,s.length()-1)-1<<endl;
}