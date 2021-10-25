#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node* next;
};

void reverseLL(Node** head)
{
	
	stack<Node*> s;
	Node* temp = *head;
	while (temp->next != NULL)
	{		
		s.push(temp);
		temp = temp->next;
	}
	*head = temp;

	while (!s.empty())
	{		
		temp->next = s.top();
	
		// Pop the value from stack
		s.pop();
	
		// update the next pointer in the
		// in the list
		temp = temp->next;
	}
	temp->next = NULL;
}

// Function to Display
// the elements in List
void printlist(Node* temp)
{
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
}

// Program to insert back of the
// linked list
void insert_back(Node** head, int value)
{

	// we have used insertion at back method
	// to enter values in the list.(eg:
	// head->1->2->3->4->Null)
	Node* temp = new Node();
	temp->data = value;
	temp->next = NULL;
	
	// If *head equals to NULL
	if (*head == NULL)
	{
	*head = temp;
	return;
	}
	else
	{
	Node* last_node = *head;
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = temp;
	return;
	}
}

// Driver Code
int main()
{
	Node* head = NULL;

	insert_back(&head, 1);
	insert_back(&head, 2);
	insert_back(&head, 3);
	insert_back(&head, 4);
	cout << "Given linked list\n";
	printlist(head);
	reverseLL(&head);
	cout << "\nReversed linked list\n";
	printlist(head);
	return 0;
}
