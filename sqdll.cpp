#include "sqdll.h"

void enqueueFront(node *&head, node *&tail, int value)
{
    node *newNode = new node;
    newNode->data = value;
    newNode->next = head;
    newNode->prev = nullptr;

    if (head == nullptr)
    {
        head = tail = newNode;
    }
    else
    {
        head->prev = newNode;
        head = newNode;
    }
}

void enqueueBack(node *&head, node *&tail, int value)
{
    node *newNode = new node;
    newNode->data = value;
    newNode->next = nullptr;
    newNode->prev = tail;

    if (tail == nullptr)
    {
        head = tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void dequeueFront(node *&head, node *&tail)
{
    if (head == nullptr)
    {
        cout << "Deque is empty, nothing to dequeue" << endl;
        return;
    }

    node *dltTemp = head;
    head = head->next;
    if (head != nullptr)
    {
        head->prev = nullptr;
    }
    else
    {
        tail = nullptr;
    }
    delete dltTemp;
}

void dequeueBack(node *&head, node *&tail)
{
    if (tail == nullptr)
    {
        cout << "Deque is empty, nothing to dequeue" << endl;
        return;
    }

    node *dltTemp = tail;
    tail = tail->prev;
    if (tail != nullptr)
    {
        tail->next = nullptr;
    }
    else
    {
        head = nullptr;
    }
    delete dltTemp;
}

void displayList(node *head)
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
