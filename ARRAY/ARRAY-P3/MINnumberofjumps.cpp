#include<iostream>
using namespace std;

int minJumps(int arr[], int size){
    int jump=0, counter=0;
    if (size == 1)
    {
        return 0;
    }
    
    while (size > 0)
    {
        size = (size-1) - arr[counter];
        counter = counter + arr[counter];
        jump++;
    }
    return jump;   
}

int main(){
    cout<<"array size: "<<endl;
    int count;
    cin>>count;
    int a[count];
    cout<<"enter array: "<<endl;
    for (int i = 0; i < count; i++)
    {
        cin>>a[i];
    }
    cout<<"jumps required are: "<<endl<<minJumps(a, count)<<endl;
    return 0;
}
