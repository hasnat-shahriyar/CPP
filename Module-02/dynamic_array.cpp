#include <bits/stdc++.h>
using namespace std;

int * fun()
{
    int *a = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    return a;
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Output values from the array (values of arr[]):" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    int *p = fun();
    cout << "Output values from the dynamically allocated array (values of p[]):" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }
    return 0;
}