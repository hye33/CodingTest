#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int count = 0;
    int n, left = 0;
    cin >> n;

    while (1)
    {
        if (n % 5 == 0) break;
        n -= 3;
        count++;
        if (n < 0)
        {
            cout << -1;
            return 0;
        }
    }
    cout << (n / 5) + count;
}