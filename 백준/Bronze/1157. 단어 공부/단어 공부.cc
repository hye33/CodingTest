#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    cin >> word;
    int count[26] = {};
    int max;
    bool e = false;

    for (int i = 0; i < word.length(); i++)
    {
        char target = (word[i] < 91) ? word[i] : word[i] - 32;
        count[target - 'A']++;
    }

    max = 0;
    for (int i = 1; i < 26; i++)
    {
        if (count[i] > count[max])
        {
            max = i;
            e = false;
        }
        else if (count[i] == count[max])
        {
            e = true;
        }
    }

    if (e) cout << '?' << endl;
    else cout << char(max + 'A') << endl;
}