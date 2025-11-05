#include <iostream>
#include <queue>
using namespace std;

int box[1001][1001];
int m, n;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
queue<pair<int, int>> q;

bool isInBox(int ny, int nx)
{
    return (ny >= 0 && ny < n && nx >= 0 && nx < m);
}

void bfs()
{
    while (!q.empty())
    {
        pair<int, int> top = q.front();
        q.pop();
        int y = top.first;
        int x = top.second;

        for (int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (isInBox(ny, nx) && box[ny][nx] == 0)
            {
                q.push(make_pair(ny, nx));
                box[ny][nx] = box[y][x] + 1;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> m >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> box[i][j];
            if (box[i][j] == 1)
                q.push(make_pair(i, j));
        }
    }

    bfs();

    int maxDate = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (box[i][j] > maxDate)
                maxDate = box[i][j];
            if (box[i][j] == 0)
            {
                cout << -1;
                return 0;
            }
        }
    }
    cout << (maxDate - 1);
}