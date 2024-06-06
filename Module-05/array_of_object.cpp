#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    double marks;
};

int main()
{
    int n;
    cin >> n;

    Student *a = new Student[n];

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Name: " << a[i].name << " Roll: " << a[i].roll << " CGPA: " << a[i].marks << endl;
    }
    delete[] a;
    return 0;
}