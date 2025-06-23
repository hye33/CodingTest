#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> v[101];

int bfs(int start, int target, bool visited[101])
{
    queue<pair<int, int>> q;
    q.push(make_pair(0, start));
    visited[start] = true;

    int level = -1;
    while(!q.empty())
    {
        pair<int, int> cur = q.front();
        q.pop();
        
        if (target == cur.second)
        {
            level = cur.first;
            break;
        }

        for (int i = 0; i < v[cur.second].size(); i++)
        {
            if (!visited[v[cur.second][i]])
            {
                q.push(make_pair(cur.first + 1, v[cur.second][i]));
                visited[v[cur.second][i]] = true;
            }
        }
    }
    return level;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, minCount = 100000, minP = 0;
    cin >> n >> m;
    while(m--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        for (int j = 1; j <= n; j++)
        {
            if (i == j) continue;
            bool visited[101] = {0};
            count += bfs(i, j, visited);
        }
        if (count < minCount)
        {
            minCount = count;
            minP = i;
        }
    }
    cout << minP;
}