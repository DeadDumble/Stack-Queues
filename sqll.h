#ifndef SQLL_H
#define SQLL_H

#include <iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

void push(node *&head, int value);
void pop(node *&head);

void enqueue(node *&head, node *&tail, int data);
void dequeue(node *&head, node *&tail);

void displayList(node *head);

#endif

