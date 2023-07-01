#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* next;
    node(int k)
    {
        this->data=k;
        this->next=NULL;
    }
};
node *top;
void push(int x) 
{
    node *temp=new node(x);
    temp->next=top;
    top=temp;
}
void pop()
{
    if(top)
    {
        node* temp=top;
        top=top->next;
        free(temp);
    }
    else
    {
        cout<<"stack underflow"<<endl;
    }
}
int peek()
{
    if(top) return top->data;
    else
    {
        cout<<"stack underflow ";
        return -1;
    }
}
bool isEmpty()
{
    return (top==NULL);
}
int main()
{
    push(11);
    push(22);
    push(33);
    push(44);
    cout<<"all elements of the stack are: "<<endl;
    while(!isEmpty())
    {
        cout<<peek()<<endl;
        pop();
    }
    if(isEmpty()) cout<<"stack empty"<<endl;
    else cout<<"not empty"<<endl;
}