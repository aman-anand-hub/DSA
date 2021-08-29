#include<iostream>
#include<math.h>
using namespace std;

int main(){
    cout<<"Enter the number of test cases: "<<endl;
    int t;
    cin>>t;
    while (t--)
    {
        int number, rem, reverse =0, n;
        cin>>number;
        n = number;
        while (number>0)
        {
            rem = number%10;
            reverse = (reverse*10) + rem;
            number = number/10;
        }
        if (reverse == n)
        {
            cout<<"IS PELINDROME."<<endl;
        }
        else{
            cout<<"IS NOT PELINDROME."<<endl;
        }

    }
    return 0;
}