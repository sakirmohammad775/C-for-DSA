#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node(int val) {
        this->val = val;   // Initialize the node's value with the given 'val'
        this->next = NULL; // Initialize next pointer to NULL
    }
};

void insert_at_head(Node* head ,int val){ //using function to insert// then call easily;
 Node* newnode=new Node(val);
     newnode->next=head;
     
}

int main() {

    Node *head = new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);

    head->next=a;
    a->next=b;

    return 0;
}