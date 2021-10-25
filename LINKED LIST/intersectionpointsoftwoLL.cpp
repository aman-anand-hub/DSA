#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

int countnodes(node *head)
{
    int count=0;
    if(head==NULL)
    {
        return count;
    }
    while (head!=NULL)
    {
        count++;
        head= head->next;
    }
    return count;
}

void printlist(node *head)
{
    while(head)
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

int intersection(node *head1, node *head2)
{
    int l1= countnodes(head1);
    int l2= countnodes(head2);
    int d=0;
    node *ptr1; // for LL with more nodes
    node *ptr2; // for LL with comparitively less nodes
    if(l1>l2)
    {
        d= l1-l2;
        ptr1= head1;
        ptr2= head2;
    }
    else
    {
        d=l2-l1;
        ptr1= head2;
        ptr2= head1;
    }
    for(int i=0; i<d; i++)
    {
        ptr1= ptr1->next;
    }
    while (ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1==ptr2)
        {
            return ptr1->data;
        }
        ptr1= ptr1->next;
        ptr2= ptr2->next;
    }
    return -1;
}

int main()
{
    node *head1= NULL;
    node *head2= NULL;
    push(&head1, 9);
    push(&head1, 6);
    push(&head1, 3);
    push(&head1, 5);
    push(&head1, 4);
    push(&head1, 1);
    push(&head2, 9);
    push(&head2, 6);
    push(&head2, 3);
    push(&head2, 77);

    printlist(head1);
    printlist(head2);

    head2->next= head1->next->next->next;
    //intersecting the two linked list

    int ans=intersection(head1, head2);
    cout<<ans<<endl;

    return 0;
}