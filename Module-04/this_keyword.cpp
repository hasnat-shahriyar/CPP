#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    Student(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void year()
    {
        cout << " 2024" << endl;
    }
};

int main()
{
    string n;
    getline(cin, n);
    int a;
    cin >> a;
    Student one(n, a);

    cout << "Student name: " << one.name << " Age: " << one.age;
    one.year();
    return 0;
}