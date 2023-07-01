#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkShuffle(string s1, string s2, string result)
{
    if (s1.length()+s2.length()!=result.length())
    {
        return false;
    }
    
    else
    {
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        sort(result.begin(), result.end());
        int i=0, j=0, k=0;

        while (k<result.length())
        {
            if (i<s1.length() && s1[i]==result[k])
            {
                i++;
            }
            else if (j<s2.length() && s2[i]==result[k])
            {
                j++;
            }
            else
            {
                return false;
                break;
            }
            k++;
        }
        if (i<s1.length() || j<s2.length())
        {
            return false;
        }
        return true;
    }
}

int main()
{
    cout<<"enter strings to be merged: "<<endl;
    string s1, s2, result;
    cin>>s1>>s2;
    cout<<"enter merged string: "<<endl;
    cin>>result;
    bool ans = checkShuffle(s1, s2, result);
    if(ans == true)
    {
        cout<<"yes"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


    return 0;
}