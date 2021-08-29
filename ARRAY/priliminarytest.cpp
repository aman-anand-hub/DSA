#include<iostream>
#include<math.h>
using namespace std;

int main(){
    cout<<"Enter the number of test cases: "<<endl; 
    int t;
    cin>>t;
    while (t--)
    {
        int number,count=0;
        cin>>number;
        if (number>1)
        {
            for (int i = 1; i <= number; i++)
            {
                if (number%i == 0)
                {
                    count++;
                }
                
            }
        }
        if (count ==2)
        {
            cout<<"PRIME"<<endl;
            
        }
        else{
            cout<<"NOT PRIME"<<endl; 
            
        }
    }    
    return 0;
}