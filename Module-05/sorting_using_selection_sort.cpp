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

    // Sorting from low to high marks
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j].marks > a[j + 1].marks)
            {
                // Swapping
                swap(a[j], a[j + 1]);
            }
        }
    }

    cout << "Sorted by CGPA (low to high):" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Name: " << a[i].name << " Roll: " << a[i].roll << " CGPA: " << a[i].marks << endl;
    }

    // Sorting from high to low marks
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j].marks < a[j + 1].marks)
            {
                // Swapping
                swap(a[j], a[j + 1]);
            }
        }
    }

    cout << "Sorted by CGPA (high to low):" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Name: " << a[i].name << " Roll: " << a[i].roll << " CGPA: " << a[i].marks << endl;
    }

    delete[] a;
    return 0;
}
