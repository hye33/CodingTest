#include <iostream>
#include <queue>
using namespace std;

int box[101][101][101];
int dz[6] = { 1, -1, 0, 0, 0, 0};
int dy[6] = { 0, 0, 1, -1, 0, 0};
int dx[6] = { 0, 0, 0, 0, 1, -1};

int m, n, h;

using coord = pair<int, pair<int, int>>;
queue<coord> q;

bool isInBox(int nz, int ny, int nx)
{
    return (nz >= 0 && nz < h && ny >= 0 && ny < n && nx >= 0 && nx < m);
}

void bfs()
{
    while(!q.empty())
    {
        coord top = q.front();
        q.pop();

        int z = top.first;
        int y = top.second.first;
        int x = top.second.second;

        for (int i = 0; i < 6; i++)
        {
            int nz = z + dz[i];
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (isInBox(nz, ny, nx) && box[nz][ny][nx] == 0)
            {
                q.push(make_pair(nz, make_pair(ny, nx)));
                box[nz][ny][nx] = box[z][y][x] + 1;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> m >> n >> h;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                cin >> box[i][j][k];
                if (box[i][j][k] == 1)
                    q.push(make_pair(i, make_pair(j, k)));
            }
        }
    }

    bfs();

    bool isComplete = true;
    int maxDay = 0;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                if (box[i][j][k] == 0)
                    isComplete = false;
                else if (box[i][j][k] > maxDay)
                    maxDay = box[i][j][k];
            }
        }
    }
    cout << (isComplete ? maxDay - 1 : -1);
}
