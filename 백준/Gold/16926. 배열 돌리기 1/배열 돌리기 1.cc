#include <iostream>
#include <cstring>
using namespace std;

int arr[301][301];
int res[301][301];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, r;
    cin >> n >> m >> r;
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> res[i][j];

    while(r--)
    {
        memcpy(arr, res, sizeof(res));
        for (int i = 0; i < n / 2; i++)
            for (int j = i + 1; j < m - i; j++)
                res[i][j - 1] = arr[i][j];

        for (int i = 0; i < n / 2; i++)
            for (int j = i; j < m - i - 1; j++)
                res[n - i - 1][j + 1] = arr[n - i - 1][j];
        
        for (int j = 0; j < m / 2; j++)
            for (int i = j; i < n - j - 1; i++)
                res[i + 1][j] = arr[i][j];
        
        for (int j = 0; j < m / 2; j++)
            for (int i = j + 1; i < n - j; i++)
                res[i - 1][m - j - 1] = arr[i][m - j - 1];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << res[i][j] << ' ';
        cout << '\n';
    }
}