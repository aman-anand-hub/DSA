#include <bits/stdc++.h>
using namespace std;

string findSubstring(string s, int k)
{
    unordered_set<char> vowels{'a', 'e', 'i', 'o', 'u'};
    int n= s.length();
    int result=0;
    int count=0;
    int x=0;
    int y= k-1;
    for (int i=0; i<=k-1; i++)
    {
        count= count+ vowels.count(s[i]);
    }
    result= count;

    for(int j=k; j<n; j++)
    {
        if(vowels.find(s[j])!= vowels.end())
        {
            count++;
        }
        if(vowels.find(s[j-k])!= vowels.end())
        {
            count--;
        }
        if(result<count)
        {
            result= count;
            y= j;
            x= j-k;
        }
    }
    string res= s.substr(x, k);

    return res;
}    

int main()
{
    cout<<"enter string: "<<endl;
    string s;
    cin>>s;
    int k;
    cout<<"enter K: "<<endl;
    cin>>k;
    string str=findSubstring(s, k);
    cout<<str;
    
    return 0;
}