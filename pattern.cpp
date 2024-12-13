#include <iostream>
using namespace std;

int main() {
    // Input the value of N
    int N;
    cin >> N;

    // Generate the pattern for the given odd integer N
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (j == i) {                // Diagonal from top-left to bottom-right
                cout << "\\";
            } else if (j == N - i - 1) { // Diagonal from top-right to bottom-left
                cout << "/";
            } else {
                cout << " ";            // Spaces
            }
        }
        cout << endl; // Move to the next line
    }

    return 0;
}
