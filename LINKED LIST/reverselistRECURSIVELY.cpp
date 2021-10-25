#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int data)
    {
        this->data= data;
        next= NULL;
    }
};

struct linkedlist
{
    node *head;
    linkedlist()
    {
        node head= NULL;
    }
    node* reverse(node* head)
    {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        node *rest= reverse(head->next);
        head->next->next= head;
        head->next= NULL;
        return rest;
    }

    void push(int data)
    {
        node* new_node= new node(data);
        new_node->next= head;
        head= new_node;
    }

    void printlist()
    {
        node *temp=head;
        while (temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp= temp->next;
        }
        cout<<endl;
    }
};

int main()
{
    linkedlist ll;
    ll.push(1);
    ll.push(987);
    ll.push(668);
    ll.push(2);
    ll.push(4);
    ll.printlist();
    ll.head= ll.reverse(ll.head);
    ll.printlist();

    return 0;
}