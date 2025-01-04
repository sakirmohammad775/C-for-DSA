#include <bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode* prev;

    ListNode(int x) {
        val = x;
        next = NULL;
        prev = NULL;
    }
};
void insert_at_tail(ListNode* &head,ListNode* &tail,int val){
    ListNode* newnode=new ListNode(val);
    if(!head){
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;

}
bool isPalindrome(ListNode* head,ListNode* tail){
    while(head && tail){
        if(head->val!=tail->val){
            return false;
        }
        head=head->next;
        tail=tail->prev;
    }
    return true;
}

int main() {
    ListNode* head = NULL;
    ListNode* tail = NULL;
    int value;
    while(cin>>value&& value!=-1){
        insert_at_tail(head,tail,value);
    }
    cout<<(isPalindrome(head,tail)?"YES":"NO")<<endl;
    return 0;
}