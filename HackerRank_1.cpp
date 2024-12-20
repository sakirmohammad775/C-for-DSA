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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = newnode;
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
    int maximum = INT_MIN;
    int minimum = INT_MAX;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val > maximum)
        {
            maximum = tmp->val;
        }
        if (tmp->val < minimum)
        {
            minimum = tmp->val;
        }
        tmp = tmp->next;
    }
    cout << maximum - minimum << endl;
    return 0;
}