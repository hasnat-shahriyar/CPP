#include <bits/stdc++.h>

using namespace std;

int main()
{
    char input[100001];
    char word[100001];

    while (cin.getline(input, 100001))
    {
        int n = strlen(input);
        int j = 0;

        for (int i = 0; i < n; ++i)
        {
            if (input[i] != ' ')
            {
                word[j++] = input[i];
            }
        }
        word[j] = '\0';

        sort(word, word + j);
        cout << word << endl;
    }

    return 0;
}
