#include <bits/stdc++.h>
using namespace std;
/*
A student has several pieces of information, such as a unique ID, name, section, and total marks. You will be given the information of three students. Your task is to determine and print the details of the student who achieved the highest total marks. In the case of a tie (i.e., two or more students having the same total marks), print the information of the student with the smaller ID.

Input Format

First line will contain T, the number of test cases.
For each test case there will be 3 lines. Each line will contain - ID, Name, Section, Total Marks of a student. The name will contain lowercase English alphabets only.
1 <= T <= 1000
1 <= ID <= 3
1 <= |Name| <= 100
'A' <= Section <= 'Z'
0 <= Total Marks <= 100
*/
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int max = -1, show_id = 4;
        char show_name[101], show_section;
        for (int i = 0; i < 3; ++i)
        {
            int id, marks;
            char name[101],section;
            cin >> id >> name >> section >>marks;
            if (marks > max || (marks == max && id < show_id))
            {
                max = marks;
                show_id = id;
               for (int j = 0; name[j] != '\0'; j++) {
                    show_name[j] = name[j];
                    show_name[j + 1] = '\0';
                }
                show_section=section;
            }
        }
        cout << show_id << " " << show_name << " " << show_section << " " << max << endl;
    }
    return 0;
}