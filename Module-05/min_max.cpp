#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
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
        cin >> a[i].age >> a[i].marks;
    }

    cout << endl
         << "Output: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Name: " << a[i].name << " Roll: " << a[i].age << " CGPA: " << a[i].marks << endl;
    }
    // Minimum
    Student mn;
    mn.marks = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i].marks < mn.marks)
        {
            mn = a[i];
        }
    }
    cout << endl
         << "Lowest Marked Student:" << endl
         << "Name: " << mn.name << " Age: " << mn.age << " CGPA: " << mn.marks << endl;

    //  Maximum
    Student mx;
    mx.marks = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i].marks > mx.marks)
        {
            mx = a[i];
        }
    }
    cout << endl
         << "Highest Marked Student:" << endl
         << "Name: " << mx.name << " Age: " << mx.age << " CGPA: " << mx.marks << endl;
    delete[] a;
    return 0;
}