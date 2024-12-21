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
void insert_at_tail(Node* &head,Node* &tail,int val){
    Node *newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}

void print_list(Node *head){
    Node *tmp = head;
    while(tmp!=NULL){
        cout<<tmp->val<<endl;
        tmp=tmp->next;
    }
}

void deleted_at_any_position(Node* &head,Node* &tail,int index){
    Node* tmp=head;
    for( int i=1;i<index;i++){
        tmp=tmp->next;
    }
    Node* deleteNode=tmp->next;
    tmp->next=tmp->next->next; //connect the node before the node to be deleted with the node after the node to be deleted
    delete deleteNode;
    tail=tmp;
}

int main() {
    Node *head =NULL;
    Node *tail = NULL;
    int val;
    while(true){
        cin>>val;
        if(val==-1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
    deleted_at_any_position(head,tail,5);
    print_list(head);
    cout<<tail->val<<endl;

    return 0;
}