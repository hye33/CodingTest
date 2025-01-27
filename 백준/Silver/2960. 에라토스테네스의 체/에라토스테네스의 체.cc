#include <iostream>
using namespace std;

bool arr[1001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k, cnt = 0;
    cin >> n >> k;
    for (int i = 2; i <= n; i++)
        arr[i] = true;
    for (int i = 2; i <= n; i++)
    {
        if (!arr[i]) continue;
        for (int j = 1; j * i <= n; j++)
        {
            if (!arr[i * j]) continue;
            arr[i * j] = false;
            if (++cnt == k)
            {
                cout << i * j;
                return 0;
            }
        }
    }
}