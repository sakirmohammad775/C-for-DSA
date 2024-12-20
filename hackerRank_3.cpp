/*
Problem Statement

You will be given two singly linked list of integer values as input. You need to check if all the elements of both list are same which means both list are same. If they are same print "YES" otherwise print "NO".

Note: You must use singly linked list, otherwise you will not get marks.

Input Format

First line will contain the values of the first singly linked list, and will terminate with -1.
Second line will contain the values of the second singly linked list, and will terminate with -1.
Constraints

1 <= N1, N2 <= 1000; Here N1 and N2 is the maximum number of nodes of the first and second linked list.
0 <= V <= 1000; Here V is the value of each node.
Output Format

Output "YES" or "NO".
Sample Input 0

10 20 30 40 -1
10 20 30 40 -1
Sample Output 0

YES
Sample Input 1

10 20 30 40 -1
10 20 30 -1
Sample Output 1

NO
Sample Input 2

10 20 30 40 -1
40 30 20 10 -1
Sample Output 2

NO
*/
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

bool same_line_Or_Not(Node* head1, Node* head2){
   while(head1!=NULL && head2!=NULL){
    if(head1->val != head2->val){
        return false;
    }
    head1 = head1->next;
    head2 = head2->next;
   }
   return head1==NULL && head2==NULL;

}

int main() {
    Node *head1=NULL,*tail1=NULL;
    Node *head2=NULL,*tail2=NULL;

    int val;
    while(true){
        cin>>val;
        if(val==-1){
            break;
        }
        insert_at_tail(head1,tail1,val);
    }
    while(true){
        cin>>val;
        if(val==-1){
            break;
        }
        insert_at_tail(head2,tail2,val);
    }

    if(same_line_Or_Not(head1,head2)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
     // Free memory for both lists
    Node *tmp;
    while (head1 != NULL) {
        tmp = head1;
        head1 = head1->next;
        delete tmp;
    }
    while (head2 != NULL) {
        tmp = head2;
        head2 = head2->next;
        delete tmp;
    }

    
    return 0;
}