#include "sqll.h"

void push(node *&head, int value)
{
    node *newNode = new node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void pop(node *&head)
{
    if (head == nullptr)
    {
        cout << "Stack is empty, nothing to pop" << endl;
        return;
    }

    node *dltTemp = head;
    head = head->next;
    delete dltTemp;
}

void enqueue(node*& head, node*& tail, int data)
{
    node* newNode = new node;
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void dequeue(node *&head, node *&tail)
{
    if (head == nullptr)
    {
        cout << "Queue is empty, nothing to dequeue" << endl;
        return;
    }

    node *dltTemp = head;
    head = head->next;
    delete dltTemp;

    if (head == nullptr)
    {
        tail = nullptr;
    }
}

void displayList(node *head)
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
