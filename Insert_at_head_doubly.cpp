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
        this->prev = NULL; // Initialize prev pointer to NULL
    }
};
void insert_head()
{
}
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

void insert_at_head(Node *&head,int val)
{
    Node* newnode=new Node(val);
    newnode->next=head;
    head->prev=newnode;
    head=newnode;

}
void insert_at_tail(Node* &tail, int val){
    Node* newnode=new Node(val);
    newnode->prev=tail;
    tail->next=newnode;
    tail=newnode;
}
int main()
{
    Node *head = new Node(2);
    Node *a = new Node(3);
    Node *b = new Node(4);
    Node*tail=new Node(5);

   

    tail->prev=b;
    b->next=tail;
    a->next=b;
    b->prev=a;




    insert_at_head(head,100);
    insert_at_tail(tail,30);
    print_insert(head);

    return 0;
}