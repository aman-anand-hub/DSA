#include<bits/stdc++.h>
using namespace std;
stack<int> s1;
stack<int> s2;
void push(int x)
{
    while(!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }
    s1.push(x);
    while(!s2.empty())
    {
        s1.push(s2.top());
        s2.pop();
    }
}
void pop()
{
    if(s1.empty())
    {
        cout<<"queue empty"<<endl;
        return;
    }
    int x=s1.top();
    s1.pop();
}
int front()
{
    if(s1.empty())
    {
        cout<<"queue underflow "<<endl;
        return -1;
    }
    return s1.top();
}
void displayAll()
{  
    if(s1.empty())
        return;
    cout<<s1.top()<<' ';
    int a=s1.top();
    s1.pop();
    displayAll();
    s1.push(a);
}
int main()
{
    push(2);
    push(3);
    push(4);
    push(5);
    cout<<front()<<endl;
    pop();
    pop();
    cout<<front()<<endl;
    push(6);
    push(7);
    push(8);
    displayAll();
}