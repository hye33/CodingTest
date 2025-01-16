#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int j[2] = {};
    int s[2] = {};
    int cash;
    cin >> cash;
    j[0] = cash;
    s[0] = cash;

    int flag = 0;
    int prev;
    int stock;

    for (int i = 0; i < 13; i++)
    {
        cin >> stock;

        j[1] += j[0] / stock;
        j[0] = j[0] % stock;

        if (i == 0 || prev == stock)
        {
            flag = 0;
            continue;
        }
        if (prev < stock) flag = (flag > 0) ? flag + 1 : 1;
        if (prev > stock) flag = (flag < 0) ? flag - 1 : -1;
        prev = stock;

        if (flag < -2)
        {
            s[1] += s[0] / stock;
            s[0] = s[1] % stock;
        }
        else if (flag > 2)
        {
            s[0] += s[1] * stock;
            s[1] = 0;
        }
    }
    cin >> stock;
    j[0] += j[1] * stock;
    s[0] += s[1] * stock;

    cout << ((j[0] == s[0]) ? "SAMESAME" : (j[0] > s[0]) ? "BNP" : "TIMING");
}