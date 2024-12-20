#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_head(Node* &head, int val)
{
    Node *(new_node) = new Node(val);
    new_node->next = head;
    head = new_node;
}
void print_list(Node* head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = new Node(100);
    Node *a = new Node(220);
    Node *b = new Node(320);

    head->next = a;
    a->next = b;

    insert_at_head(head, 50);
    print_list(head);
    return 0;
}