#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int age;
    Student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }
};

int main()
{
    Student student1("John Doe", 123);
    cout << student1.name << endl;
    return 0;
}