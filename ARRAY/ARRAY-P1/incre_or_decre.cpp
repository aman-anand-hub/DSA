#include<iostream>
#include<math.h>

using namespace std;

int main(){
    cout<<"enter the number: "<<endl;
    int number;
    cin>>number;
    int rem= number%4;
    while (number>0)
    {
        if (rem==0)
        {
            cout<<number+1<<endl;
            break;
        }
        else
        {
            cout<<number-1<<endl;
            break;
        }
        
    }
    return 0;
}