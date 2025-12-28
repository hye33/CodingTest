#include <iostream>
#include <queue>
using namespace std;

char paint[101][101];
bool visited[101][101];
int dy[4] = {1, -1, 0, 0};
int dx[4] = {0, 0, 1, -1};
int n;

bool isInBox(int ny, int nx)
{
    return (ny >= 0 && ny < n && nx >= 0 && nx < n);
}

bool isMatch(char a, char b, bool isBlind)
{
    if (isBlind)
        return (a == b || (a != 'B' && b != 'B'));
    else
        return (a == b);
}

void bfs(int y, int x, bool isBlind)
{
    queue<pair<int, int>> q;
    q.push(make_pair(y, x));

    while(!q.empty())
    {
        pair<int, int> front = q.front();
        q.pop();
        
        for (int i = 0; i < 4; i++)
        {
            int oy = front.first;
            int ox = front.second;
            int ny = oy + dy[i];
            int nx = ox + dx[i];

            if (isInBox(ny, nx) 
            && isMatch(paint[oy][ox], paint[ny][nx], isBlind) 
            && visited[ny][nx] == false)
            {
                q.push(make_pair(ny, nx));
                visited[ny][nx] = true;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> paint[i][j];

    int count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (visited[i][j] == false)
            {
                count1++;
                bfs(i, j, false);
            }
        }
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            visited[i][j] = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (visited[i][j] == false)
            {
                count2++;
                bfs(i, j, true);
            }
        }
    }

    cout << count1 << ' ' << count2;
}