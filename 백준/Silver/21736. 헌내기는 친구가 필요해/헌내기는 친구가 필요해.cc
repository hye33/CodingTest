#include <iostream>
#include <queue>
using namespace std;

char arr[601][601];
bool visit[601][601];
int n, m, ix, iy, cnt = 0;

int dy[4] = { 1, -1, 0, 0 };
int dx[4] = { 0, 0, 1, -1 };

void bfs(int y, int x)
{
    queue<pair<int, int>> q;
    q.push(make_pair(y, x));
    while(!q.empty())
    {
        pair<int, int> f = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ny = f.first + dy[i];
            int nx = f.second + dx[i];
            if (ny < 0 || ny >= n || nx < 0 || nx >= m || visit[ny][nx] || arr[ny][nx] == 'X')
                continue;
            if (arr[ny][nx] == 'P') cnt++;
            visit[ny][nx] = true;
            q.push(make_pair(ny, nx));
        }
    }
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

    bfs(iy, ix);
    if (cnt) cout << cnt;
    else cout << "TT";
}