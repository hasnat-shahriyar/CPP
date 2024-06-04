#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    string name;
    getline(cin, name);
    transform(name.begin(), name.end(), name.begin(), ::toupper);
    cout << name << endl;
    cout << n << endl;
    return 0;
}