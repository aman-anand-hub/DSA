#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverseString(char s[], int count){
    if (count==0)
    {
        return;
    }
    
    int start =0, end = count-1;
    while (start < end )
    {
        swap(s[start],s[end]);
        start++;
        end--;
    }
}

int main(){
    int count;
    cout<<"enter size of the string: "<<endl;
    cin>>count;
    char s[count];
    cout<<"enter string: "<<endl;
    for (int i = 0; i < count; i++)
    {
        cin>>s[i];
    }
    reverseString(s, count);
    cout<<"reversed string: "<<endl;
    for (int i = 0; i < count; i++)
    {
        cout<<s[i];
    }
    
    return 0;
}