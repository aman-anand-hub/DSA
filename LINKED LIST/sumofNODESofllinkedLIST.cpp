#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    public: 
    int data;
    Node* next;
};

void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = new Node;
 
    new_node->data = new_data;
 
    new_node->next = (*head_ref);
 
    (*head_ref) = new_node;
}

void printList(Node* N)
{
    while (N!=NULL)
    {
        cout<<N->data<<endl;
        N = N->next;
    }
}

int sumOfNodes(Node* n)
{
    int sum=0;
    while (n!=NULL)
    {
        sum = sum+n->data;
        n=n->next;
    }
    return sum;
}

int main()
{
    struct Node* head=NULL;
    push(&head, 1);
    push(&head, 131);
    push(&head, 33);
    push(&head, 22);
    push(&head, 3);

    printList(head);

    cout<<"sum of nodes: "<<sumOfNodes(head)<<endl;

    return 0;
}