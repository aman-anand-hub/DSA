/*
#include <bits/stdc++.h>
using namespace std;
struct QNode {
  int data;
  QNode* next;
  QNode(int d)
  {
    data = d;
    next = NULL;
  }
};
struct Queue {
  QNode *front, *rear;
  Queue()
  {
    front = rear = NULL;
  }
  void enQueue(int x)
  {
    QNode* temp = new QNode(x);
    if (rear == NULL) {
      front = rear = temp;
      return;
    }
    rear->next = temp;
    rear = temp;
  }
  void deQueue()
  {
    if (front == NULL)
      return;
    QNode* temp = front;
    front = front->next;
    if (front == NULL)
      rear = NULL;

    delete (temp);
  }
};
*/
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
struct queue1
{
    node *front,*rear;
    queue1()
    {
        rear=front=NULL;
    }
    void enqueue(int k)
    {
        node *temp= new node(k);
        if(rear==NULL)
        {
            rear=front=temp;
            return;
        }
        rear->next=temp;
        rear=temp;
    }
    void dequeue()
    {
        if(front==NULL) return;
        node *temp=front;
        front=front->next;
        if(front==NULL) rear=NULL;
        delete(temp);
    }
    void displayall()
    {
        if(front==NULL) return;
        while(front!=NULL)
        {
            cout<<front->data<<' ';
            front=front->next;
        }
        cout<<endl;
    }
};
int main()
{
    queue1 q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.displayall();
    q.dequeue();
    q.dequeue();
    q.displayall();
}