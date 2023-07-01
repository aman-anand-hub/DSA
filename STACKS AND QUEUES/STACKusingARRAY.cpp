#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
class stack1
{
    private:
    int top;
    public:
    int arr[MAX];
    stack1()
    {
        top=-1;
    }
    void push(int x);
    void pop();
    int peek();
    bool isEmpty();
};
void stack1::push(int x)
{
    if(top>=MAX-1) cout<<"error: stack overflow"<<endl;
    else
    {
        arr[++top]=x;
        cout<<x<<" pushed in the stack"<<endl;
    }
}
void stack1::pop()
{
    if(top<0) cout<<"error: stack underflow"<<endl;
    else
    {
        int t=arr[top];
        top--;
        cout<<t<<" succesfully popped"<<endl;
    }
}
int stack1::peek()
{
    if(top<0)
    {
        cout<<"stack underflow"<<endl;
        return -1;
    }
    else return arr[top];
}
bool stack1::isEmpty()
{
    return (top<0);
}
int main()
{
    stack1 s;
    s.push(10);
    s.push(1);
    s.push(0);
    s.push(100);
    s.push(50);
    s.push(90);
    cout<<"stack top is: "<<s.peek()<<endl;
    if(s.isEmpty()) cout<<"stack is empty"<<endl;
    else cout<<"stack is not empty"<<endl;
    s.pop();
    s.pop();
    s.pop();
    cout<<"All elements of the stack: "<<endl;
    while(!s.isEmpty())
    {
        cout<<s.peek()<<", ";
        s.pop();
    }
    if(s.isEmpty()) cout<<"stack is empty"<<endl;
    else cout<<"stack is not empty"<<endl;
    cout<<"stack top is: "<<s.peek()<<endl;
}