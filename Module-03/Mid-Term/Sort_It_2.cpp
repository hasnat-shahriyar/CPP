#include <bits/stdc++.h>
using namespace std;

int *sort_it(int n)
{
    int *a = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n, greater<int>());

    return a;
}

int main()
{
    int n;
    cin >> n;
    int *final_output = sort_it(n);
    for (int i = 0; i < n; i++)
    {
        cout << final_output[i] << " ";
    }
    delete[] final_output;
    return 0;
}