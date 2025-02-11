#include "sqll.h"

int main()
{
    node *head = nullptr;
    node *tail = nullptr; // Added tail pointer for queue operations
    int choice, data;

    do {
        cout << endl;
        cout << "1) Stack - Push" << endl;
        cout << "2) Stack - Pop" << endl;
        cout << "3) Queue - Enqueue" << endl;
        cout << "4) Queue - Dequeue" << endl;
        cout << "5) Display List" << endl;
        cout << "6) Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to push: ";
            cin >> data;
            push(head, data);
            break;
        case 2:
            pop(head);
            break;
        case 3:
            cout << "Enter value to enqueue: ";
            cin >> data;
            enqueue(head, tail, data);
            break;
        case 4:
            dequeue(head, tail);
            break;
        case 5:
            displayList(head);
            break;
        case 6:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice, try again." << endl;
        }
    } while (choice != 6);

    return 0;
}

// Ensure function prototypes match
void push(node *&head, int value);
void pop(node *&head);
void enqueue(node *&head, node *&tail, int value);
void dequeue(node *&head, node *&tail);
void displayList(node *head);
