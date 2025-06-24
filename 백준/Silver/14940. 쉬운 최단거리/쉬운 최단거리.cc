#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;
char map[1001][1001];
int length[1001][1001];

int yOffset[4] = {-1, 0, 1, 0};
int xOffset[4] = {0, -1, 0, 1};

int bfs(pair<int, int> start)
{
    queue<pair<int, pair<int, int>>> q;
    q.push(make_pair(1, make_pair(start.first, start.second)));
    length[start.first][start.second] = 0;

    while (!q.empty())
    {
        int len = q.front().first;
        int y = q.front().second.first;
        int x = q.front().second.second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int newY = y + yOffset[i];
            int newX = x + xOffset[i];
            if (newY < n && newY >= 0 && newX < m && newX >= 0
                && length[newY][newX] < 0 && map[newY][newX] != '0')
            {
                q.push(make_pair(len + 1, make_pair(newY, newX)));
                length[newY][newX] = len;
            }
        }
    }
    return -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    pair<int, int> startPoint;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> map[i][j];
            length[i][j] = -1;
            if (map[i][j] == '2')
            {
                startPoint.first = i;
                startPoint.second = j;
            }
            else if (map[i][j] == '0')
                length[i][j] = 0;
        }
    }
    bfs(startPoint);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << length[i][j] << ' ';
        }
        cout << '\n';
    }
}