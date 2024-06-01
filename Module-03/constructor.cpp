#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int age;
    double height;

    Student(int a, double h)
    {
        age = a;
        height = h;
    }
};

int main()
{
    int age;
    double height;
    char name[100];
    cout << "Enter Name: ";
    cin.getline(name, 100);
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Height: ";
    cin >> height;

    Student mim(age, height);

    cout << endl;
    cout << "Output : " << "Name: " << name << ", Age: " << mim.age << ", Height: " << mim.height << " feet" << endl;
    return 0;
}