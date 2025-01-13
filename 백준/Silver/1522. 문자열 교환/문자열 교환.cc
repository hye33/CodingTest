#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str, comp = "";
    cin >> str;

    for(auto c : str)
        if (c == 'a')  comp += "a";

    int minEx = 1000;
    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        int count = 0;
        for (int j = 0; j < comp.length(); j++)
        {
            int idx = (i + j >= len) ? i + j - len : i + j;
            if (str[idx] != 'a') count++;
        }
        minEx = min(minEx, count);
    }
    cout << minEx;
}