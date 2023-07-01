#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int sumeven=0, sumodd=0;
    cout<<"enter the numbers: "<<endl;
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i <n; i++)
    {
        if (a[i]%2 ==0)
        {
            sumeven = sumeven+a[i];
        }
        if (a[i]%2 !=0)
        {
            sumodd = sumodd+a[i];
        }
    }
    if(sumeven >sumodd){
        cout<<"READY"<<endl;
    }
    else{
        cout<<"NOT READY"<<endl;
    }
    return 0;
}
