#include<iostream>
using namespace std;

int main(){
    cout<<"enter the test cases: "<<endl;
    int t;
    cin>>t;
    while (t--)
    {
        char k;
        cin>>k;
        if (k == 'b' || k =='B')
        {
            cout<<"battleship"<<endl;
        }
        if (k == 'c' || k == 'C')
        {
            cout<<"cruser"<<endl;
        }
        if(k == 'd' || k == 'D')
        {
            cout<<"destroyer"<<endl;
        }
    }
    return 0;
}