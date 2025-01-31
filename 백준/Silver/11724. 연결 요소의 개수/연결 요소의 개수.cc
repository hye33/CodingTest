#include <iostream>
#include <vector>
using namespace std;

vector<int> vec[1001];
bool visit[1001];

void dfs(int node)
{
    visit[node] = true;
    for (int i = 0; i < vec[node].size(); i++)
        if (!visit[vec[node][i]]) dfs(vec[node][i]);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    while(m--)
    {
        int u, v;
        cin >> u >> v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!visit[i])
        {
            cnt++;
            dfs(i);
        }
    }

    cout << cnt;
}