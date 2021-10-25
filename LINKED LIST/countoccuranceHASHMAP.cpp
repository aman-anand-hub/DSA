#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

void printlist(node *head)
{
    while (head!=NULL)
    {
        cout<<head->data<<"->";
        head= head->next;
    }
    cout<<endl;
}

void deletelist(node **head)
{
    node *curr= *head;
    node *next= NULL;
    while (curr!=NULL)
    {
        next= curr->next;
        free(curr);
        curr= next;
    }
    *head= NULL;
}

void push(node **head, int data)
{
    node *new_node= new node();
    new_node->data = data;
    new_node->next= *head;
    *head= new_node;
}

void countOccurance(node *head, int element)
{
    unordered_map<int ,int> umap;
    node *temp= head;
    while (temp!=NULL)
    {
        umap[temp->data]++;
        temp= temp->next;
    }
    for (auto x: umap)
    {
        if(x.first==element)
        {
            cout<<"element "<<element<<" was repeated "<<x.second<<" times.";
        }
    }
}


int main()
{
    node* head=NULL;
    push(&head, 5);
    push(&head, 5);
    push(&head, 33);
    push(&head, 5);
    push(&head, 3);

    printlist(head);

    countOccurance(head, 5);

    return 0;
}