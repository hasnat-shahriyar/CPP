#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text;
    cout << "Your Name: ";
    cin >> text;
    cout << "Size of " << text << " is: " << text.size() << endl;
    text.clear();
    cout << text << " is cleared: " << endl;

    string name = "mim";
    name.push_back('m');
    cout << name << endl;
    name.pop_back();
    cout << name << endl;

    string a = "bhollot";
    a.erase(3, 2);
    cout << a << endl;
    return 0;
}