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

node* SortedMerge(node* a, node* b)
{
	node* result = NULL;
	
	if (a == NULL)
		return(b);
	else if (b == NULL)
		return(a);
	
	if (a->data <= b->data)
	{
		result = a;
		result->next = SortedMerge(a->next, b);
	}
	else
	{
		result = b;
		result->next = SortedMerge(a, b->next);
	}
	return(result);
}

int main()
{
    node *head1= NULL;
    node *head2= NULL;
    push(&head1, 15);
    push(&head1, 10);
    push(&head1, 5);
    push(&head2, 20);
    push(&head2, 5);
    push(&head2, 3);
    printlist(head1);
    printlist(head2);
    node *result= SortedMerge(head1, head2);
    printlist(result);
}