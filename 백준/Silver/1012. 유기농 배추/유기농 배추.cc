#include <iostream>
#include <vector>
using namespace std;

bool arr[50][50];

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

int t, m, n, k;

void dfs(int y, int x)
{
    if (y < 0 || x < 0 || y >= n || x >= m || arr[y][x] == 0) return;
    arr[y][x] = 0;
    for (int i = 0; i < 4; i++)
        dfs(y + dy[i], x + dx[i]);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while(t--)
    {
        cin >> m >> n >> k;
        int y, x;
        for (int i = 0; i < k; i++)
        {
            cin >> x >> y;
            arr[y][x] = 1;
        }

        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < m; i++)
            {
                if (arr[j][i])
                {
                    cnt++;
                    dfs(j, i);
                }
            }
        }
        cout << cnt << '\n';
    }
}