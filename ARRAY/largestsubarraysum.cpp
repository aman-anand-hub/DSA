#include<iostream>
using namespace std;

int subArraySum(int arr[], int n){
    int start=0, end=0, s=0, current_sum=0, max_sum= 0;
    for (int i = 0; i < n; i++)
    {
        current_sum = current_sum + arr[i];
        if (current_sum < 0)
        {
            current_sum =0;
            s=i+1;
        }
        if (max_sum < current_sum)
        {
            max_sum = current_sum;
            start= s;
            end =i;
        }
    }
    cout<<"sum of largest subarray is: "<<max_sum<<endl
              <<"starting index: "<<start<<endl
              <<"ending index: "<<end<<endl;

}

int main(){
    int count;
    cout<<"enter array size: "<<endl;
    cin>>count;
    int a[count];
    cout<<"enter array: "<<endl;
    for (int i = 0; i < count; i++)
    {
        cin>>a[i];
    }

    cout<<subArraySum(a, count)<<endl;
    
    return 0;
}