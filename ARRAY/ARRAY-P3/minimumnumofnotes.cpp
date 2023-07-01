#include<iostream>
#include<math.h>
using namespace std;

int main(){
    cout<<"enter the number of test cases: "<<endl;
    int t;
    cin>>t;
    int a[6];
    a[0]=1;
    a[1]=2;
    a[2]=5;
    a[3]=10;
    a[4]=50;
    a[5]=100;
    while (t--)
    {
        int n,count =0;
        cin>>n;
        for (int i = 5; i>=0; i--)
        {
            if(n>=a[i])
            {
             n=n-a[i];
             i++;
             count++;   
            }
        }
    cout<<count<<endl;    
        
    }
    return 0;
}