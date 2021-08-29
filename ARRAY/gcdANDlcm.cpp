#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    cout<<"enter the number of test cases: "<<endl;
    int t;
    cin>>t;
    while (t--)
    {
        int a, b, gcd, lcm;
        cin>>a>>b;
        gcd = __gcd(a,b);
        lcm = (a/gcd)*b;
        cout<<"GCD of "<<a<<" & "<<b<<" is "<<gcd<<"and LCM of "<<a<<" & "<<b<<" is "<<lcm<<endl;
    }
    return 0;
}