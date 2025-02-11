#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> vec[1001];
bool visit[1001];

void dfs(int node)
{
    if (visit[node]) return;
    cout << node << ' ';
    visit[node] = true;
    sort(vec[node].begin(), vec[node].end());
    for (int i = 0; i < vec[node].size(); i++)
        dfs(vec[node][i]);
}

void bfs(int node)
{
    queue<int> q;
    visit[node] = true;
    cout << node << ' ';
    q.push(node);
    while(!q.empty())
    {
        int t = q.front();
        q.pop();
        for (int i = 0; i < vec[t].size(); i++)
        {
            if (!visit[vec[t][i]])
            {
                q.push(vec[t][i]);
                visit[vec[t][i]] = true;
                cout << vec[t][i] << ' ';
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, v;
    cin >> n >> m >> v;
    while(m--)
    {
        int a, b;
        cin >> a >> b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }

    dfs(v);
    cout << '\n';
    fill_n(visit, n + 1, false);
    bfs(v);
}