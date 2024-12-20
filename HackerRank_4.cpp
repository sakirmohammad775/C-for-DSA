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

void insert_at_head(Node *&head, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}

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

void delete_from_index(Node *&head, Node *&tail, int index)
{
    if(index<0 || head==NULL){
        return;
    }
    if (index == 0)
    {
        Node *tmp = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        delete tmp;
        return;
    }
    Node *tmp = head;
    for (int i = 0; i < index - 1 && tmp->next != NULL; i++)
    {
        tmp = tmp->next;
    };
    if (tmp->next == NULL)
    {
        return;
    }
    Node *delete_list = tmp->next;
    tmp->next = delete_list->next;
    if (tmp->next == NULL)
    {
        tail = tmp;
    }
    delete delete_list;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    int q;
    cin >> q;
    Node *head = NULL;
    Node *tail = NULL;

    while (q--)
    {
        int x, val;
        cin >> x >> val;

        if (x == 0)
        {
            insert_at_head(head, val);
            if (tail == NULL)
            {
                tail = head;
            }
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, val);
        }
        else if (x == 2)
        {
            delete_from_index(head, tail, val);
        }
        print_linked_list(head);
    }
    return 0;
}