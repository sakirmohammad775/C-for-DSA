#include <bits/stdc++.h>
using namespace std;

class Node /// constructor
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;   // Initialize the node's value with the given 'val'
        this->next = NULL; // Initialize next pointer to NULL
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val) // add the new value at the end of the list
{
    Node *newnode = new Node(val);
    if (head == NULL) // handle corner case..
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode; // connection
    tail = newnode;       // update the tail pointer

    // right now tmp is pointing to the last node
}
void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL) //  O(N)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    print_list(head);
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

class Node /// Constructor for the Node class
{
public:
    int val;      // Value of the node
    Node *next;   // Pointer to the next node
    Node(int val) // Constructor to initialize a node with the given value
    {
        this->val = val;   // Initialize the node's value with the given 'val'
        this->next = NULL; // Initialize the next pointer to NULL
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val) // Add a new value at the end of the list
{
    Node *newnode = new Node(val); // Create a new node
    if (head == NULL)              // Handle the corner case: empty list
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode; // Connect the last node's "next" to the new node
    tail = newnode;       // Update the tail pointer to point to the new node
}

void print_list(Node *head) // Print all the nodes of the linked list
{
    Node *tmp = head;
    while (tmp != NULL) // Iterate until we reach the end of the list
    {
        cout << tmp->val << endl; // Print the value of the current node
        tmp = tmp->next;          // Move to the next node
    }
}

int main()
{
    Node *head = NULL; // Initialize the head pointer to NULL
    Node *tail = NULL; // Initialize the tail pointer to NULL

    int val; // Declare a variable to store the input value

    while (true)
    {
        cin >> val;       // Take input from the user
        if (val == -1)    // Check if the user wants to stop inputting
        {
            break;        // Exit the loop
        }
        insert_at_tail(head, tail, val); // Add the value to the list
    }

    print_list(head); // Print the final linked list
    return 0;         // Exit the program
}

*/