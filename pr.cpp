#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Question: Take an integer array A of size N as input. Then take an integer M as input. You need to take an array B of size M and copy all elements of array A to array B. Delete the array A and then take input of the rest of the elements of array B. After that print array B.
    int n = 0;
    int m = 0;
    int a[1000] = {0};
    int b[1000] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    for (int i = n; i < n + m; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n + m; i++)
    {
        cout << b[i] << " ";

        // After printing array B, delete array A
        a[i] = 0;

        // Clear array B for next iteration
        b[i] = 0;
    }

    return 0;
}