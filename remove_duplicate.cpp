#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> linked_list;
    int val;

    // Input values until -1 is encountered
    while (cin >> val && val != -1) {
        linked_list.push_back(val);
    }

    // Sort the list
    linked_list.sort();

    // Remove duplicates
    linked_list.unique();

    // Print the final list
    for (int value : linked_list) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
