#include <bits/stdc++.h>
using namespace std;

int * fun()
{
    int * x = new int;
    *x = 100;
    return x;
}

int main()
{
    int *a = new int;
    *a = 10;
    cout << "Memory address stored in pointer 'a': " << a << endl;
    cout << "Value stored at the memory address pointed to by 'a': " << *a << endl;

    int *p = fun();
    cout << "Memory address stored in pointer 'p': " << p << endl;
    cout << "Value stored at the memory address pointed to by 'p': " << *p << endl;
    return 0;
}