#include <bits/stdc++.h>
using namespace std;

class Student {
    string name, section, id;
    int cls, math_marks, eng_marks, total_marks;
};

bool compareStudents(const Student& a, const Student& b) {
    if (a.total_marks != b.total_marks) {
        return a.total_marks > b.total_marks;
    } else {
        return a.id < b.id;
    }
}

int main() {
    int n;
    cin >> n;

    Student students[100];

    for (int i = 0; i < n; i++) {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
        students[i].total_marks = students[i].math_marks + students[i].eng_marks;
    }

    sort(students, students + n, compareStudents);

    for (int i = 0; i < n; i++) {
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " " << students[i].id << " " << students[i].math_marks << " " << students[i].eng_marks << endl;
    }

    return 0;
}