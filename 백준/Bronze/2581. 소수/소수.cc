#include <iostream>
using namespace std;

bool arr[10001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int m, n;
    cin >> m >> n;
    fill_n(arr, n + 1, true);

    arr[1] = false;
    for (int i = 2; i < n; i++)
    {
        if (!arr[i]) continue;
        for (int j = i + i; j <= n; j += i)
            arr[j] = false;
    }

    int sum = 0, minP = -1;
    for (int i = m; i <= n; i++)
    {
        if (!arr[i]) continue;
        sum += i;
        if (minP == -1) minP = i;
    }
    if (minP == -1)
        cout << -1;
    else
    {
        cout << sum << '\n' << minP;
    }
}