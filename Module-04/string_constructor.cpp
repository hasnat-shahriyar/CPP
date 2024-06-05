#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "hello";
    string b("hello world");
    string c("Hello", 4);
    string d = "hello bahe";
    string x(d, 5);
    string e(20, 'h');

    cout << a << endl
         << b << endl
         << c << endl
         << x << endl
         << e << endl;
    return 0;
}