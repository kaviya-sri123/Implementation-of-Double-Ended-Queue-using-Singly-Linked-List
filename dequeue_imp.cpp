#include "dequeue_header.h"
void Dequeue::enqueueFront(int n)
{
    Node *temp = new Node();
    temp->data = n;
    temp->next = NULL;
    if(front == NULL)
    {
        front = rear = temp;
    }
    else
    {
        temp->next = front;
        front = temp;
    }
    cout<<"\nNumber enqueued at front.\n\n";
}
void Dequeue::enqueueRear(int n)
{
    Node *temp = new Node();
    temp->data = n;
    temp->next = NULL;
    if(rear == NULL)
    {
        front = rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
    }
    cout<<"\nNumber enqueued at rear.\n\n";
}
void Dequeue::dequeueFront()
{
    if(front==NULL)
        cout<<"\nQueue is empty.\n\n";
    else
    {
        Node* temp = front;
        front = front->next;
        cout<<"\nFront element "<<temp->data<<" dequeued.\n\n";
        free(temp);
    }
}
void Dequeue::dequeueRear()
{
    if(front==NULL)
        cout<<"\nQueue is empty.\n\n";
    else if(front==rear)
    {
        cout<<"\nRear element "<<rear->data<<" dequeued.\n\n";
        free(front);
        front=NULL;
        rear=NULL;
    }
    else
    {
        cout<<"\nRear element "<<rear->data<<" dequeued.\n\n";
        Node *temp = front;
        while(temp->next != rear)
            temp = temp->next;
        rear=temp;
        rear->next=NULL;
    }
}
void Dequeue::display()
{
    if(front==NULL)
        cout<<"\nQueue is empty.\n\n";
    else
    {
        cout<<"DEQUEUE : ";
        Node *temp = front;
        while(temp!=NULL)
        {
            cout<<temp->data;
            if(temp->next!=NULL)
                cout<<" -> ";
            temp = temp->next;
        }
        cout<<"\n\n";
    }
}