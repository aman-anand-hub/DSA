#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

void printlist(node *head)
{
    node *temp= head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp= temp->next;
    }
    cout<<endl;
}

void insert(node **head, int data)
{
    if(*head==NULL)
    {
        *head = new node;
        (*head)->data= data;
        (*head)->next= NULL;
        return;
    }
    node *temp = new node;
    temp->data= (*head)->data;
    temp->next= (*head)->next;
    (*head)->data= data;
    (*head)->next= temp;   
}

node *middle(node *head)
{
    node *curr=head;
    node *slow= curr;
    node *fast= curr->next;
    while (slow->next != NULL && (fast!=NULL && fast->next!=NULL))
    {
        slow= slow->next;
        fast= fast->next->next;
    }  
    return slow;  
}

node *merge(node *firstnode, node *secondnode)
{
    node *merged= new node;
    node *temp= new node;

    merged = temp;
    
    while (firstnode!=NULL && secondnode!=NULL)
    {
        if(firstnode->data<=secondnode->data)
        {
            temp->next= firstnode;
            firstnode= firstnode->next;
        }
        else
        {
            temp->next= secondnode;
            secondnode= secondnode->next;
        }
        temp= temp->next;
    }

    while(firstnode!=NULL) {
        temp->next = firstnode;
        firstnode = firstnode->next;
        temp = temp->next;
    }
 
    while(secondnode!=NULL) {
        temp->next = secondnode;
        secondnode = secondnode->next;
        temp = temp->next;
    }
    return merged->next;
}

node *sort(node *head)
{
    if(head->next==NULL)
    {
        return head;
    }
    node *mid= new node();
    node *head2= new node();
    mid= middle(head);
    head2= middle(head)->next;
    mid->next= NULL;

    node *finalhead= merge(sort(head), sort(head2));

    return finalhead;
}

int main()
{
    node *head=NULL;
    int n[]={7,10,5,20,3,2};
    for(int i=0;i<6;i++)
    {
        insert(&head, n[i]);
    }    
    printlist(head);
    //printlist(head);
    printlist(sort(head));

    return 0;
}