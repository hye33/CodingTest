#include <iostream>
using namespace std;

char arr[601][601];
bool visit[601][601];
int n, m, ix, iy, cnt = 0;

int dy[4] = { 1, -1, 0, 0 };
int dx[4] = { 0, 0, 1, -1 };

void dfs(int y, int x)
{
    if (y < 0 || y >= n || x < 0 || x >= m || visit[y][x] || arr[y][x] == 'X') return;
    if (arr[y][x] == 'P') cnt++;
    visit[y][x] = true;
    for (int i = 0; i < 4; i++)
        dfs(y + dy[i], x + dx[i]);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'I')
            {
                ix = j ; iy = i;
            }
        }
    }

    dfs(iy, ix);
    if (cnt) cout << cnt;
    else cout << "TT";
}