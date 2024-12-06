#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string name[101], section[101], id[101];
    int grade[101], math_marks[101], english_marks[101], total_marks[101];

    for (int i = 0; i < n; i++) {
        cin >> name[i] >> grade[i] >> section[i] >> id[i] >> math_marks[i] >> english_marks[i];
        total_marks[i] = math_marks[i] + english_marks[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (total_marks[j] < total_marks[j + 1] || (total_marks[j] == total_marks[j + 1] && id[j] > id[j + 1])) {
    
                swap(total_marks[j], total_marks[j + 1]);
                swap(name[j], name[j + 1]);
                swap(grade[j], grade[j + 1]);
                swap(section[j], section[j + 1]);
                swap(id[j], id[j + 1]);
                swap(math_marks[j], math_marks[j + 1]);
                swap(english_marks[j], english_marks[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << name[i] << " " << grade[i] << " " << section[i] << " " << id[i] << " " << math_marks[i] << " " << english_marks[i] << endl;
    }

    return 0;
}