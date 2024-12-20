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
        return;
    }

    tail->next = newnode; //connection 
    tail = newnode;//update the tail pointer

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
    Node *head = new Node(1); // track first one as a head
    Node *a = new Node(2);
    Node *tail = new Node(3); // track last one as a tail

    head->next = a;
    a->next = tail;

    insert_at_tail(head, tail, 40);
    print_list(head);
    cout<<tail->val<<endl;
    return 0;
}