#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val) {
        this->val = val;   // Initialize the node's value with the given 'val'
        this->next = NULL; // Initialize next pointer to NULL
        this->prev=NULL; // Initialize prev pointer to NULL
    }
};
void insert_head(){

}
void print_insert(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;

}
int main() {
    Node* head= new Node(2);
    Node* a = new Node(3);
    Node* tail = new Node(4);

    head->next=a;
    a->prev=head;
    a->next=tail;
    tail->prev=a;

    print_insert(head);
    
    return 0;
}