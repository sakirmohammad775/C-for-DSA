#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];//100bytes
    int roll;//4 bytes 
    double gpa; //8 bytes
} ;
int main()
{
    Student a;
    a.roll = 20;
    a.gpa = 4.5;
    char temp[100] ="Sakib";
    strcpy(a.name, temp);
    cout<<a.name<<" "<<a.roll<< " "<<a.gpa<< endl;
    return 0;
}
