#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    cin.ignore(); 

    while (t--) {
        string word;
        getline(cin, word);
        string s = "", x = "";
        bool space = false;
        for (char c : word) {
            if (c == ' ' && !space) {
                space = true;
            } 
            else if (!space) {
                s += c; 
            } 
            else {
                x += c; 
            }
        }
        string reverseWord = "";  
        int i = 0;
        int lengthOfS = s.length();
        int lengthOfX = x.length();

        while (i < lengthOfS) {
            bool match = true;

            for (int j = 0; j < lengthOfX; j++) {
                if (i + j >= lengthOfS || s[i + j] != x[j]) {
                    match = false;
                    break;
                }
            }

            if (match) {
                reverseWord += "#";
                i += lengthOfX; 
            } else {
                reverseWord += s[i];
                i++;  
            }
        }
        cout << reverseWord << endl;
    }

    return 0;
}
