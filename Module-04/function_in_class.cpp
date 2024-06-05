#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    string firstName;
    string lastName;
    int age2;
    Person(string nm, int ag, string fnm, string lnm, int a)
    {
        name = nm;
        age = ag;
        firstName = fnm;
        lastName = lnm;
        age2 = a;
    }
    void hello()
    {
        cout << "My Name is: " << name << " Age: " << age << endl;
    }
    string spouse()
    {
        return "Her Name: " + firstName + " " + lastName + " Age: " + to_string(age2);
    }
};

int main()
{
    string n1, n2;
    int age;

    cout << "Enter first name: ";
    getline(cin, n1);

    cout << "Enter last name: ";
    getline(cin, n2);

    cout << "Enter age: ";
    cin >> age;

    Person nahin("Nahin", 24, n1, n2, age);
    nahin.hello();

    cout << nahin.spouse() << endl;
    return 0;
}