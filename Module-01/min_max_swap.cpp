#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int min_value = min(a,b);
    cout << "Min Value between A and B: " << min_value << endl;

    int max_value = max({a, b, c, d});
    cout << "Max Value between A, B, C, D: " << max_value << endl;

    swap(a, b);
    cout << endl << "Swapped A: " << a << endl << "Swapped B: " << b << endl;
    return 0;
}