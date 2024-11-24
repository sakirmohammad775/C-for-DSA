#include <bits/stdc++.h>
using namespace std;
//Amena has just learned alphabets. She can read write from a to z only in lowercase. But, Amena always writes in alphabetic order (alphabetic order means from a to z in sorted order) what she saw. Also she writes a line as a word. For example, she writes monkey as ekmnoy. Her mother wants to test her reading and writing skills. Her mother gave her some lines, can you tell what she will write?

//Note: Input will be given by EOF.
int main()
{
  string s;
  while (getline(cin, s)){
    sort(s.begin(), s.end());
    cout << s << endl;
    
  }
    return 0;
}
