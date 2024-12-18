#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int value;
    cin >> value;
    int flag = 0;
    int l = 0;
    int r = n - 1;
    while (r>l)
    {
        int mid = (l + r) / 2;
        if (a[mid] == value)
        {
            flag = 1;
            break;
        }
        else if (a[mid] > value)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}