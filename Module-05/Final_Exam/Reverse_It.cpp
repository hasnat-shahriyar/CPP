#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
};

int main()
{
    int n;
    cin >> n;

    Student *students = new Student[n];

    for (int i = 0; i < n; i++)
    {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id;
    }

    for (int i = 0; i < n / 2; i++)
    {
        swap(students[i].section, students[n - i - 1].section);
    }

    for (int i = 0; i < n; i++)
    {
        cout << students[i].name << " " << students[i].cls << " " << students[i].section
             << " " << students[i].id << endl;
    }

    delete[] students;
    return 0;
}
