#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int count[2] = {};
    int n, left = 0;
    cin >> n;
    count[1] = n / 5;
    left = n % 5;
    int max = n / 3;
    while (left != 0)
    {
        if (left < 0)
        {
            left += 5 - 3;
            count[1]--;
            count[0]++;
        }
        else
        {
            left -= 3;
            count[0]++;
        }

        if (count[0] > max)
        {
            cout << -1;
            return 0;
        }
    }
    cout << count[0] + count[1];
}