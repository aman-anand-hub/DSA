#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    while (!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    s.push(5);
    s.empty()? cout<<"empty"<<endl : cout<<"notempty"<<endl;
    cout<<"size of stack "<<s.size()<<endl;

    s.emplace('c'); // push function and emplace functions are just the same

    cout<<s.top()<<endl;//it return ASCII value of c because the type def of stack is INT type.

    cout<<"current size of stack: "<<s.size()<<endl;
    

    return 0;
}