#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

int main()
{
    Person *rakib = new Person("Rakib", 25);
    Person *mehedi = new Person("Mehedi", 24);
    *rakib = *mehedi;
    delete mehedi;
    cout << rakib->name << rakib->age << endl;
    return 0;
}