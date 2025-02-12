#include <iostream>
#include <vector>
using namespace std;

bool arr[129][129];
int cnt[2];

void divide(int y, int x, int n)
{
    bool f = false;
    bool comp = arr[y][x];
    for (int i = y; i < y + n; i++)
        for (int j = x; j < x + n; j++)
            if (arr[i][j] != comp) f = true;

    if (f)
    {
        n = n / 2;
        divide(y, x, n);
        divide(y + n, x, n);
        divide(y, x + n, n);
        divide(y + n, x + n, n);
    }
    else
        cnt[comp]++;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    divide(0, 0, n);
    cout << cnt[0] << '\n' << cnt[1];
}