#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;

int getVar()
{
    int x = 12;
    sleep(5);
    return x;
}

int main()
{
    int before = 50;
    cout << before << endl;
    int value = getVar();
    cout << value << endl;
    return 0;
}