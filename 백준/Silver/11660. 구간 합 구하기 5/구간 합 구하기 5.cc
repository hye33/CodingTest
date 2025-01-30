#include <iostream>
using namespace std;

int ps[1025][1025];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, input;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> input;
            ps[i][j] = ps[i][j - 1] + input;
        }
        if (i != n) ps[i + 1][0] = ps[i][n];
    }

    while(m--)
    {
        int sum = 0;
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        for (int i = a; i <= c; i++)
            sum += ps[i][d] - ps[i][b - 1];
        
        cout << sum << '\n';
    }
}