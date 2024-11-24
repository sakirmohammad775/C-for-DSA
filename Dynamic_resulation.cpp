#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[10000];
    while (cin.getline(s, 10000))
    {
        char exchange[10000];
        int index=0;

        int n = strlen(s);
        for (int i = 0; i < n; i++)
        {
            if (s[i] != ' ')
            {
                    exchange[index++] = s[i];
            }
        }
        sort(exchange,exchange+index);
        for(int i=0; i<index; i++){
            cout << exchange[i];
        }
        cout << endl;
    }

    return 0;
}