#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
       left shift '<<'
       eg: x<<1, x<<y(x left shift by y)
       what left shift does is it ignores the digitin left and adds a trailing zero to the right in binary representation of a number.
       eg:
          0000...1101<<1=0000...11010

       left shifting by 1(x<<1) is qual to x*2pow(1)
       similarly-> x<<y= x*2pow(y)

       in case of right shift(>>) operator it is opposite of left shift operator, a zero is added to the left ingoring the 
       eg: 
          0000...1101>>1=0000...0110

        conclusion: (x>>y)=x/(2pow(y))  
           
    */
   int a=32;
   int b=1;
   cout<<(a>>5)<<endl;
   cout<<(b<<5)<<endl;
   /*
      BITWISE NOT OPERATOR(~):
      It inverts all the bits of number
      eg:
        ~(0000...1100)=(1111...0011)
   */
    unsigned int x=2;   // using unsinged bit coz, signed bites occupy one bit for the sign(+/-) of the number, hebce only 31 bits are avalable
   cout<<(~x)<<endl;
   x=5;
   cout<<(~x)<<endl;
   // ~ of singed numbers is negative
}