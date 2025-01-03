#include <bits/stdc++.h>
using namespace std;

list<int> removeDuplicate(const list<int> intList)
{
    set<int> uniqueVal;
    for (int val : intList)
    {
        uniqueVal.insert(val);
    }
    list<int> sortedList;
    for (int val : uniqueVal)
    {
        sortedList.push_back(val);
    }
    return sortedList;
}
int main()
{
    list<int> linkedList;
    int val;
    while (cin >> val && val != -1)
    {
        linkedList.push_back(val);
    }
    linkedList = removeDuplicate(linkedList);
    for (int val : linkedList)
    {
        cout << val << " ";
    }
    return 0;
}