#include <iostream>
#include <cstring>
using namespace std;

int arr[500][500];
int res[500][500];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n, degree;
    cin >> t;
    while(t--)
    {
        cin >> n >> degree;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> res[i][j];

        int mid = n / 2;
        if (degree > 0 && degree != 360)
        {
            for (int d = degree; d != 0; d -= 45)
            {
                memcpy(arr, res, sizeof(arr));
                for (int i = 0; i < n; i++)
                {
                    res[i][n - i - 1] = arr[i][mid];
                    res[mid][n - i - 1] = arr[i][n - i - 1];
                    res[i][i] = arr[mid][i];
                    res[i][mid] = arr[i][i];
                }
            }
        }
        else if (degree < 0)
        {
            for (int d = degree; d != 0; d += 45)
            {
                memcpy(arr, res, sizeof(arr));
                for (int i = 0; i < n; i++)
                {
                    res[i][i] = arr[i][mid];
                    res[mid][i] = arr[i][i];
                    res[i][n - i - 1] = arr[mid][n - i - 1];
                    res[i][mid] = arr[i][n - i - 1];
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << res[i][j] << ' ';
            cout << '\n';
        }
    }
}