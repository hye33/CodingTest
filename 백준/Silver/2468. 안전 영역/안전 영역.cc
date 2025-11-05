#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cctype>
using namespace std;

int graph[101][101];
int visited[101][101];

int dy[4] = {1, -1, 0, 0};
int dx[4] = {0, 0, 1, -1};

int n;
int rain;

bool isInGraph(int ny, int nx)
{
    return (ny >= 0 && ny < n && nx >= 0 && nx < n);
}

void bfs(pair<int, int> node)
{
    queue<pair<int, int>> q;
    q.push(node);
    
    while(!q.empty())
    {
        pair<int, int> top = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ny = top.first + dy[i];
            int nx = top.second + dx[i];
            
            if (isInGraph(ny, nx) && !visited[ny][nx] && graph[ny][nx] > rain)
            {
                visited[ny][nx] = true;
                q.push(make_pair(ny, nx));
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int maxH = 0;
    
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> graph[i][j];
            if (graph[i][j] > maxH)
                maxH = graph[i][j];
        }
    }
    
    int maxCount = 0;
    for (int r = 0; r < maxH; r++)
    {
        rain = r;
        
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (graph[i][j] > rain && !visited[i][j])
                {
                    bfs(make_pair(i, j));
                    count++;
                }
            }
        }
        
        if (count > maxCount)
            maxCount = count;
            
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                visited[i][j] = false;
    }
    
    cout << maxCount;

    return 0;
}