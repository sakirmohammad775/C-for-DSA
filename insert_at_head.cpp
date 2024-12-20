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

void insert_at_head(Node* &head ,int val){ //using function to insert// then call easily;
 Node* newnode=new Node(val);
     newnode->next=head;
     head=newnode;

}
void print_linked_list(Node* head){
    Node* tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<endl;
        tmp=tmp->next;
    }
}

int main() {

    Node* head = new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);

    head->next=a;
    a->next=b;

    insert_at_head(head, 5);
    print_linked_list(head);

    return 0;
}