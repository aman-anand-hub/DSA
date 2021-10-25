#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

void push(node **head, int data)
{
    node *new_node= new node();
    new_node->data= data;
    new_node->next= *head;
    *head= new_node;
}

void printlist(node *head)
{
    while (head!=NULL)
    {
        cout<<head->data<<"->";
        head= head->next;
    }
    cout<<endl;
}

void deleteNode(node *head, int key)
{
    node *prev= head;
    node *temp= head;
    // checking if temp is the 1sr node
    if(temp!=NULL && temp->data==key)
    {
        head= temp->next;
        delete temp;
        return;
    }
    else
    {
        // finding temp and prev node
        while (temp!=NULL && temp->data!=key)
        {
            prev= temp;
            temp= temp->next;
        }
        if(temp== NULL) // means temp is after the last node
        // if we write temp->next==null, this implies that, temp is on the last node and, if the element tobe deleted is the last node, then it wont delete the last node.
        {
            return;
        }
        //removing link and deleteing node
        prev->next= temp->next;
        delete temp;
    }
}
int main()
{
    node *head = NULL;
    push(&head, 11);
    push(&head, 233);
    push(&head, 283);
    push(&head, 33);

    printlist(head);

    deleteNode(head, 11);

    printlist(head);

    return 0;
}