#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, count = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a != 1) count++;

        for (int j = 2; j < a; j++)
        {
            if (a % j == 0)
            {
                count--;
                break;
            }
        }
    }

    cout << count;
}