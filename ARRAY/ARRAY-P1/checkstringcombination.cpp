#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isCombination(string s1, string s2, string result){
    if (s1.length() + s2.length() != result.length())
    {
        return false;
    }
    int i=0, j=0, k=0;
    while (k != result.length())
    {
        if (i< s1.length() && s1[i] == result[k])
        {
            i++;
        }
        else if(j<s2.length() && s2[j] == result[k])
        {
            j++;
        }
        else{
            return false;
        }
        k++;
    }
    return true;
}

int main(){
    string s1,s2,result;
    cout<<"enter s1, s2 and resultant string resp. : "<<endl;
    cin>>s1>>s2>>result;

    if (isCombination(s1, s2, result))
    {
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    
    return 0; 
}