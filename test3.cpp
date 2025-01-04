#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    string address;
    ListNode *next;
    ListNode *prev;

    ListNode(string add)
    {
        address = add;
        next = NULL;
        prev = NULL;
    }
};
void insert_at_tail(ListNode *&head, ListNode *&tail, const string &add)
{
    ListNode *newNode = new ListNode(add);
    if (!head)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void listCode(ListNode *head, int q)
{
    ListNode *current = head;
    string webadd, add;
    for (int i = 0; i < q; i++)
    {
        cin >> webadd;
        if (webadd == "visit")
        {
            cin >> add;
            ListNode *temp = head;
            bool found = false;
            while (temp)
            {
                if (temp->address == add)
                {
                    current = temp;
                    found = true;
                    break;
                }
                temp = temp->next;
            }
            if (!found)
            {
                cout << "Not Available" << endl;
            }
            else{
                cout << current->address << endl;
            }
        }
        else if (webadd == "next")
        {
            if (current && current->next)
            {
                current = current->next;
                cout << current->address << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (webadd == "prev")
        {
            if (current && current->prev)
            {
                current = current->prev;
                cout << current->address << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }
}
int main()
{
    ListNode *head = NULL;
    ListNode *tail = NULL;
    string address;
    while(cin>>address && address!="end"){
        insert_at_tail(head,tail,address);
    }
    int q;
    cin>>q;
    listCode(head,q);
    return 0;
}