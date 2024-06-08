#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++)
    {
        string l;
        getline(cin, l);
        stringstream ss(l);

        string s, x;
        ss >> s >> x;

        string result = "";
        int length_of_s = s.size();
        int length_of_x = x.size();

        for (int j = 0; j <= length_of_s - length_of_x;)
        {
            bool found = true;
            for (int k = 0; k < length_of_x; k++)
            {
                if (s[j + k] != x[k])
                {
                    found = false;
                    break;
                }
            }

            if (found)
            {
                result += '#';
                j += length_of_x;
            }
            else
            {
                result += s[j];
                j++;
            }
        }

        for (int j = length_of_s - length_of_x + 1; j < length_of_s; j++)
        {
            result += s[j];
        }

        cout << result << endl;
    }

    return 0;
}
