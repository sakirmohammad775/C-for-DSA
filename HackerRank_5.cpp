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

void insert_at_tail(Node *&head, Node *&tail, int val) {
    Node *newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void remove_duplicates(Node *head) {
    Node *current = head;

    // Traverse through each node
    while (current != NULL) {
        Node *prev = current;
        Node *temp = current->next;

        // Compare current node's value with subsequent nodes
        while (temp != NULL) {
            if (temp->val == current->val) {
                prev->next = temp->next;
                delete temp;
                temp = prev->next; // Move to the next node
            } else {
                prev = temp;
                temp = temp->next;
            }
        }

        current = current->next; // Move to the next node
    }
}

void print_linked_list(Node *head) {
    Node *tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main() {
    Node *head = NULL, *tail = NULL;
    int val;

    // Input values for the linked list
    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    // Remove duplicates
    remove_duplicates(head);

    // Print the final linked list
    print_linked_list(head);

    return 0;
}
