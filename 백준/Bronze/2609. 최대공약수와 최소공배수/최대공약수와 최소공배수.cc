#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    cin >> a >> b;

    for (int i = (a < b) ? a : b; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            cout << i << '\n';
            break;
        }
    }

    for (int i = (a < b) ? a : b; i < a * b + 1; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            cout << i << '\n';
            break;
        }
    }
}