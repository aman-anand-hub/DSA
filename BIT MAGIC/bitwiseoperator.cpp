#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
       & -> bitwise AND operator
       | -> bitwise OR operator
       ^ -> bitwise XOR operator

       * '&' operator
       0&0=0
       0&1=0
       1&0=0
       1&1=1

       * '|' operator
       0|0=0
       0|1=1
       1|0=1
       1|1=1

       * '^' operator (same input=0 and diff-input=1)
       0^0=0
       0^1=1
       1^0=1
       1^1=0
    */
   int a=3, b=6;
   cout<<(a&b)<<endl;
   cout<<(a|b)<<endl;
   cout<<(a^b)<<endl;
}