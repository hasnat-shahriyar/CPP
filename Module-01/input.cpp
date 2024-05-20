#include <iostream>
using namespace std;

int main()
{
    // integer value input and output
    int a, b;
    cout << "Type value of A: " << " ";
    cin >> a;
    cout << "Type value of B: " << " ";
    cin >> b;
    cout << "B: " << b << " A: " << a << endl;
    cout << "The sum of A+b=" << " " << a+b << endl;
    // Character input and its ascii value output
    char c, d;
    cout << "Type two Character: ";
    cin >> c >> d;
    int ascii = c;
    cout << "Character Output: " << c << " and " << d << ". " << "And their ASCII value: " << ascii << " and " << int(d) << endl;
    return 0;
}