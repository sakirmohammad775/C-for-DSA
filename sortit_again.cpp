#include <bits/stdc++.h>

using namespace std;

class Student {
public:
  string name, section, id;
  int grade, math_marks, english_marks, total_marks;
};

bool cmp(const Student& a, const Student& b) {
  if (a.total_marks != b.total_marks) {
    return a.total_marks > b.total_marks;
  } else {
    return a.id < b.id;
  }
}

int main() {
  int n;
  cin >> n;

  Student s[1000];

  for (int i = 0; i < n; i++) {
    cin >> s[i].name >> s[i].grade >> s[i].section >> s[i].id >> s[i].math_marks >> s[i].english_marks;
    s[i].total_marks = s[i].math_marks + s[i].english_marks;
  }

  sort(s, s + n, cmp);

  for (int i = 0; i < n; i++) {
    cout << s[i].name << " " << s[i].grade << " " << s[i].section << " " << s[i].id << " " << s[i].math_marks << " " << s[i].english_marks << endl;
  }

  return 0;
} 