void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL) 
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}
