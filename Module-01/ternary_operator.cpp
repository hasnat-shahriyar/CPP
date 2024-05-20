#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    a > b ? cout << "True" << endl : cout << "False" << endl;
    
    int c;
    cout << "Enter to check Even or Odd: ";
    cin >> c;
    c % 2 == 0 ? cout << "Even" << endl : cout << "Odd" << endl;
    return 0;
}
