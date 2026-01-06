#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    cin.ignore();
    while(n--)
    {
        string str;
        int score = 0;
        getline(cin, str);
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == ' ') continue;
            score += (str[i] - 'A' + 1);
        }
        if (score == 100)
            cout << "PERFECT LIFE" << '\n';
        else
            cout << score << '\n';
    }
}