#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int value;
    ListNode *next;
    ListNode *prev;

    ListNode(int val)
    {
        value = val;
        next = NULL;
        prev = NULL;
    }
};
bool insert(ListNode *&head, ListNode *&tail, int idx, int value)
{
    ListNode *newnode = new ListNode(value);
    if (idx == 0)
    {
        newnode->next = head;
        if (head)
        {
            head->prev = newnode;
        }
        head = newnode;
        if (!tail)
        {
            tail = newnode;
        }
        return true;
    }

    ListNode *current = head;
    int count = 0;
    while (current && count < idx - 1)
    {
        current = current->next;
        count++;
    }
    if (!current)
    {
        delete newnode;
        return false;
    }

    if (current->next == NULL)
    {
        current->next = newnode;
        newnode->prev = current;
        tail = newnode;
    }
    else
    {
        ListNode *nextnode = current->next;
        newnode->next = nextnode;
        newnode->prev = current;
        nextnode->prev = newnode;
        current->next = newnode;
    }
    return true;
}
void printList(ListNode *head, ListNode *tail)
{
    cout << "L -> ";
    for (ListNode *tmp = head; tmp; tmp = tmp->next)
    {
        cout << tmp->value << " ";
    }
    cout << endl;
    cout << "R -> ";
    for (ListNode *tmp = tail; tmp; tmp = tmp->prev)
    {
        cout << tmp->value << " ";
    }
    cout << endl;
}

int main()
{
    ListNode *head = NULL;
    ListNode *tail = NULL;
    int q;
    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        int idx, value;
        cin >> idx >> value;
        if (!insert(head, tail, idx, value))
        {
            cout << "invalid" << endl;
        }
        else
        {
            printList(head, tail);
        }
    }
    return 0;
}