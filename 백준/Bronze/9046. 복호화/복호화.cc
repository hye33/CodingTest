#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t, max;
    bool miss = false;
    string str;
    int count[26] = { 0, };

    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++)
    {
        getline(cin, str);
        int len = str.length();
        for (int j = 0; j < len; j++)
        {
            if (str[j] != ' ')
                count[str[j] - 'a']++;
        }

        max = 0;
        for (int k = 1; k < 26; k++)
        {
            if (count[k] > count[max])
            {
                max = k;
                miss = false;
            }
            else if (count[k] == count[max])
            {
                miss = true;
            }
        }

        if (miss)
            cout << '?' << endl;
        else
            cout << (char)(max + 'a') << endl;

        fill_n(count, 26, 0);
        miss = false;
    }
}