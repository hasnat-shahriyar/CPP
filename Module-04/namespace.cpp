#include <bits/stdc++.h>
using namespace std;

namespace rakib
{
    string name = "rakib";
    int age = 25;
    void friend1()
    {
        cout << " childhood friend" << endl;
    }
}

namespace nahin
{
    string name2 = "nahin";
    int age2 = 24;
}

namespace shad
{
    string name3 = "shad";
    int age3 = 23;
    void friend2()
    {
        cout << " school life friend" << endl;
    }
}

using namespace rakib;

int main()
{
    cout << "Name: " << name << " Age: " << age;
    friend1();
    cout << "Name: " << nahin::name2 << " Age: " << nahin::age2 << endl;
    cout << "Name: " << shad::name3 << " Age: " << shad::age3;
    shad::friend2();
    return 0;
}