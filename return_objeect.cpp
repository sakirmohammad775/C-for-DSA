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
student fun(){
    student karim(2,5,5.00);
    return karim;
}
int main()
{    
    student obj=fun() ;// rahim()->constructor caLL
    cout << obj.roll  << " " << obj.grade << " " << obj.gpa << endl;
    return 0;
}