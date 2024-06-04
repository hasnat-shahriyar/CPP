#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    getline(cin, name);
    stringstream namename(name);
    string word;
    while (namename >> word)
    {
        cout << word << endl;
    }
    return 0;
}