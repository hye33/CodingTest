#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string name;
    int count[26] = {};
    vector<char> res;
    char mid = 0;
    cin >> name;

    for (int i = 0; i < name.length(); i++)
        count[name[i] - 'A']++;

    for (int i = 0; i < 26; i++)
    {
        if (count[i] % 2 == 1)
        {
            if (mid != 0)
            {
                cout << "I'm Sorry Hansoo" << '\n';
                return 0;
            }
            mid = i + 'A';
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (i + 'A' == mid && count[i] == 1) continue;
        for (int j = 0; j < count[i] / 2; j++)
            res.push_back(i + 'A');
    }

    for (int i = 0; i < res.size(); i++)
        cout << res[i];

    if (mid != 0)
        cout << mid;

    for (int i = res.size() - 1; i > -1; i--)
        cout << res[i];
}