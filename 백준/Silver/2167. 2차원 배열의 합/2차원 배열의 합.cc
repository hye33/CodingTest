#include <iostream>
using namespace std;

int arr[302][302];
int ps[302][302];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, k;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> arr[i][j];

    ps[1][1] = arr[1][1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            ps[i][j] = ps[i][j - 1] + arr[i][j];

        if (i != n ) ps[i + 1][0] = ps[i][m];
    }

    cin >> k;
    while(k--)
    {
        int sum = 0;
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        for (int i = a; i <= c; i++)
            sum += (ps[i][d] - ps[i][b - 1]);

        cout << sum << '\n';
    }
}