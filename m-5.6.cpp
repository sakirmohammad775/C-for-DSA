#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    // constructor set
    Node *next;
    Node(int val)
    {
        this->val = val;   // Initialize the node's value with the given 'val'
        this->next = NULL; // Initialize next pointer to NULL
    }
};
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;

    Node* tmp =head;
    while (tmp != NULL)
    {

        cout << tmp->val << endl;
        tmp = tmp->next;
    }
    tmp=head;
    while (tmp != NULL)
    {

        cout << tmp->val << endl;
        tmp = tmp->next;
    }
    return 0;
}