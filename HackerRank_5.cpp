#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node(int val) {
        this->val = val;  
        this->next = NULL; 
    }
};
void insert_at_tail(Node *&head, Node *&tail, int val)
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
void remove_duplicates_from_list(Node *head){
    Node *current=head;
    while(current!=NULL){
        Node *prev=current;
        Node *tmp=current->next;

        while(tmp!=NULL){
            if(tmp->val==current->val){
                prev->next=tmp->next;
                delete tmp;
                tmp=prev->next;
            }
            else{
                prev=tmp;
                tmp=tmp->next;
            }
        }
        current=current->next;
    }
}

void print_linked_list(Node *head){
    Node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}


int main() {
    Node *head=NULL,*tail=NULL;
    int val;
    while(true){
        cin>>val;
        if(val==-1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
    remove_duplicates_from_list(head);
    print_linked_list(head);
    return 0;
}