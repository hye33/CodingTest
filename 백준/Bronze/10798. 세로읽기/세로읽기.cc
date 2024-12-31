#include <iostream>
#include <string>
using namespace std;

int main()
{
    char words[5][15] = {};
    for (int i = 0; i < 5; i++)
    {
        cin >> words[i];
    }

    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (words[j][i] == 0) continue;
            cout << words[j][i];
        }
    }
}