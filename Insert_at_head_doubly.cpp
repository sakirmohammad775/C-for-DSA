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
void insert_at_tail(Node* &head, Node* &tail,int val){
     Node* newnode=new Node(val);
     if(head==NULL){
        head=newnode;
        tail=newnode;
        return; // return if head is null   
     }
     tail->next=newnode;
     newnode->prev=tail;
     tail=newnode;
}



int main()
{
    Node *head = new Node(2);
    Node *a = new Node(3);
    Node *tail = new Node(5);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    insert_at_tail(head,tail, 100);

    print_insert(head);

    return 0;
}