#include <bits/stdc++.h>
using namespace std;

class Bike
{
public:
    char color[100];
    int speed;
    int length;
};

int main()
{
    Bike honda, yamaha;

    // Input for Honda
    cin.getline(honda.color, 100);
    cin >> honda.speed >> honda.length;
    cin.ignore(); // Ignore the newline character left in the input buffer

    cout << "Brand: Honda, " << "Color: " << honda.color << ", Speed: " << honda.speed << ", Length: " << honda.length << endl;

    // Input for Yamaha
    cin.getline(yamaha.color, 100);
    cin >> yamaha.speed >> yamaha.length;
    cin.ignore(); // Ignore the newline character left in the input buffer

    cout << "Brand: Yamaha, " << "Color: " << yamaha.color << ", Speed: " << yamaha.speed << ", Length: " << yamaha.length << endl;

    return 0;
}
