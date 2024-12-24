#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node *next;
    Node* prev;
    Node(int val) {
        this->val = val;   // Initialize the node's value with the given 'val'
        this->next = NULL; // Initialize next pointer to NULL
        this->prev=NULL; // Initialize prev pointer to NULL
    }f
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
void delete_at_any_pos(Node* &head,int idx){
    Node* tmp=head;
    for(int i=1;i<idx;i++){
        tmp=tmp->next;
    }
    Node* deletenode=tmp->next;
    tmp->next=tmp->next->next;
    tmp->next->prev=tmp;
    delete deletenode;

    
}

int main() {
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;
    delete_at_any_pos(head,1);
    print_insert(head);
    return 0;
}