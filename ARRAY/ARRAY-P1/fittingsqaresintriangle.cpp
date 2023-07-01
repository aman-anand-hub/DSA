#include<iostream>
#include<math.h>
using namespace std;

int main(){
    cout<<"enter the number of test cases: "<<endl;
    int t;
    cin>>t;
    while (t--)
    {
        int base;
        cin>>base;
        if (base>0)
        {
            base = base - 2;
            base = base / 2;
            base = base * (base+1)/2;
            cout<<"total number of sqares that can be fitted in "<<base<<endl;
        }
        else{
            cout<<"Invalid base"<<endl;
        }
    }
    return 0;
}