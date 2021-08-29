#include<iostream>
#include<math.h>
using namespace std;

int sum(long d, long n){
    if (d==0)
    {
        return n;
    }
    
    n = n*(n+1)/2;
    d--;
    return sum(d,n);
}

int main(){
    cout<<"enter the number of test cases: "<<endl;
    int t;
    cin>>t;
    while (t--)
    {
        cout<<"enter the pair: "<<endl;
        long a,b;
        cin>>a>>b;
        cout<<sum(a,b)<<endl;
    }

    return 0;
}