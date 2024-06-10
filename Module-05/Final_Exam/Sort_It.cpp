#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
    int total_marks;
};

int main()
{
    int n;
    cin >> n;

    Student *students = new Student[n];

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
        students[i].total_marks = students[i].math_marks + students[i].eng_marks;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (students[j].total_marks < students[j + 1].total_marks ||
                (students[j].total_marks == students[j + 1].total_marks && students[j].id > students[j + 1].id))
            {

                swap(students[j], students[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << students[i].name << " " << students[i].cls << " " << students[i].section
             << " " << students[i].id << " " << students[i].math_marks << " "
             << students[i].eng_marks << endl;
    }

    delete[] students;
    return 0;
}
