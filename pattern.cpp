#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    ;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            if (i == k && i + k == n - 1)
            {
                cout << "X";
            }
            else if (k == i)
            {
                cout << "\\";
            }
            else if (i + k == n - 1)
            {
                cout << "/";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}