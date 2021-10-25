#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

void printlist(node *head)
{
    while (head)
    {
        cout<<head->data<<"->";
        head= head->next;
    }
    cout<<endl;
}

void push(node **head, int data)
{
    node *new_node= new node();
    new_node->data= data;
    new_node->next= *head;
    *head= new_node;
}

int countnodes(node *n)
{
    int count= 0;
    if(n==NULL)
    {
        return count;
    }
    while (n)
    {
        count++;
        n= n->next;
    }
    return count;
}

void *intersection(node *a, node *b)
{
    int n1= countnodes(a);
    int n2= countnodes(b);
    int d= 0;
    node *ptr1;
    node *ptr2;
    if(n1>n2)
    {
        ptr1= a;
        ptr2= b;
        d= n1-n2;
    }
    if(n1<n2)
    {
        ptr1= b;
        ptr2= a;
        d= n2-n1;
    }
    for (int i = 0; i < d; i++)
    {
        ptr1= ptr1->next;
    }
    while (ptr1 && ptr2)
    {
        if(ptr1==ptr2)
        {
            break;
        }
        ptr1= ptr1->next;
        ptr2= ptr2->next;
    }
    while (ptr1)
    {
        cout<<ptr1->data<<"->";
        ptr1= ptr1->next;
    }
    cout<<endl;
}

int main()
{
    node *a= NULL;
    node *b= NULL;

    push(&a,1);
    push(&a,2);
    push(&a,3);
    push(&a,4);
    push(&a,5);
    push(&a,6);
    printlist(a);

    push(&b,3);
    push(&b,4);
    push(&b,5);
    push(&b,6);
    printlist(b);

    a->next->next= b; // creating a intersection

    intersection(a, b);

    return 0;
}