#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "ella";
    // for(int i=0; i<s.size(); i++){
    //     cout<<s[i]<<" ";
    // }
    // cout << *s.begin() << " " << *(s.end() - 1) << endl;
    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}