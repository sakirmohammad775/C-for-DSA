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
        this->prev = NULL;
    }
};
void print_insert(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insert_at_any_pos(Node *head, int idx, int val)
{
    Node *newnode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next; // 1. newnode is pointing to the next of tmp
    tmp->next->prev = newnode; // 2. tmp->next->prev is pointing to newnode
    tmp->next = newnode;       // 3. tmp->next is pointing to newnode
    newnode->prev = tmp;       //
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    insert_at_any_pos(head, 2, 100);
    insert_at_any_pos(head, 3, 400);

    print_insert(head);

    return 0;
}