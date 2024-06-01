#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int age;
    double cgpa;
};
int main()
{
    Student a, b;
    cin.getline(a.name, 100);
    cin >> a.age >> a.cgpa;

    getchar();

    cin.get(b.name, 100);
    cin >> b.age >> b.cgpa;

    cout << "Name: " << a.name << " Age: " << a.age << " CGPA: " << a.cgpa << endl;
    cout << "Name: " << b.name << " Age: " << b.age << " CGPA: " << b.cgpa << endl;
    return 0;
}