#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;   // initialize the node's value with the given 'val
        this->next = NULL; // initialize next pointer to NULL
    }
};
int main()
{
    Node a(100), b(20), c(30);

    a.next = &b; // store with value and address
    b.next = &c;

    cout << a.val << " " << b.val << " " << c.val << endl;
    cout << a.next->val << endl;
    cout << (*a.next).val << endl;
    cout << a.next->next->val << endl;
    return 0;
}
/*
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

void insert_at_tail(Node *&head, Node *&tail, int val) // add the new value at the end of the list
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
void print_list(Node *head)
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
*/