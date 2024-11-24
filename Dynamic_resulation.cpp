#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[10000];
    cin.getline(s, 10000);

    int n = strlen(s);
    sort(s, s + n);
    for(int i = 0; i < n; i++){
        if(s[i]!=' '){
            cout<<s[i];
        }
    }


    return 0;
}