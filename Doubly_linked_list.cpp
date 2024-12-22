#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;   // Initialize the node's value with the given 'val'
        this->next = NULL; // Initialize next pointer to NULL
        this->prev = NULL; // Initialize previous pointer to NULL
    }
};
void print_forward(Node *head)
{
    Node *tmp = head; // tmp is a temporary pointer
    while (tmp != NULL)
    {                            // loop until we reach the end of the list
        cout << tmp->val << " "; // print the value of the current node
        tmp = tmp->next;         // move to the next node
    }
    cout << endl;
}
void print_backward(Node *tail)
{
    Node *tmp = tail; // tmp is a temporary pointer
    while (tmp != NULL)
    {                            // loop until we reach the end of the list
        cout << tmp->val << " "; // print the value of the current node
        tmp = tmp->prev;         // move to the next node
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a; // head->next points to node a
    a->prev = head; // a->prev points to node head
    a->next = tail; // a->next points to node tail
    tail->prev = a; // tail->prev points to node a

    print_forward(head);
    print_backward(tail);
    return 0;
}