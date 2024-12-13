#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int roll;
    int grade;
    double gpa;
    student(int roll, int grade, double gpa)
    {
        (*this). roll = roll;
        (*this). grade = grade;
        (*this). gpa = gpa;
    }
};
int main()
{    
    student rahim(3, 24, 3.5); // rahim()->constructor caLL
    cout << rahim.roll  << " " << rahim.grade << " " << rahim.gpa << endl;
    return 0;
}