#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    string s;
    cin.ignore(); // to ignore the newline character that getline adds when the user presses Enter
    getline(cin, s);

    cout<<x<<endl;
    cout << s << endl;
    return 0;
}