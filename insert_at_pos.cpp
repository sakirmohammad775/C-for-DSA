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

void insert_at_position(Node *&head, int index, int val) // add the new value at the end of the list
{
    Node* newnode=new Node(val);
    Node* tmp=head;
    for(int i=1;i<index;i++){
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
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
    Node *head = new Node(1);
    Node *a = new Node(2);
    Node *b = new Node(3);

    head->next = a;
    a->next = b;

    insert_at_position(head, 2, 40);
    print_list(head);
    return 0;
}