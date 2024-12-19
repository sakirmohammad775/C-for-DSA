#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;   // initialize the node's value with the given 'val
        this->next = NULL; // initialize next pointer to NULL
    }
};
int main()
{
    Node a(100), b(20), c(30);

    a.next = &b; // store with value and address
    b.next = &c;

    cout << a.val << " " << b.val << " " << c.val << endl;
    cout << a.next->val << endl;
    cout << (*a.next).val << endl;
    cout << a.next->next->val << endl;
    return 0;
}