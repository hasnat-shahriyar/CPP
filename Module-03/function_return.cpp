#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, int gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student func()
{
    int roll;
    int cls;
    double gpa;
    cin >> roll >> cls >> gpa;
    Student bio(roll, cls, gpa);
    return bio;
}

int main()
{
    Student output = func();
    cout << "Roll: " << output.roll << "; Class: " << output.cls << "; GPA: " << output.gpa << endl;
    return 0;
}