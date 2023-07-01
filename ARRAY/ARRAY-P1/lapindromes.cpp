#include<iostream>
#include<string.h>
using namespace std;

int main(){
    cout<<"Enter the number of test cases: "<<endl;
    int t;
    cin>>t;
    while (t--)
    {
        string str,s1,s2;
        cin>>str;
        int len = str.length();
        if (len%2 ==0)
        {
            int half = len/2;
            s1 = str.substr(0, half);
            s2 = str.substr(half, len-1);
        }
        else{
            int half = len/2;
            s1 = str.substr(0, half);
            s2 = str.substr(half+1, len-1);
        }
        if (s1.compare(s2)==0)
        {
            cout<<"IS LAPINDROME."<<endl;
        }
        else{
            cout<<"NOT LAPINDROME."<<endl;
        }
    }
    return 0;
    
}