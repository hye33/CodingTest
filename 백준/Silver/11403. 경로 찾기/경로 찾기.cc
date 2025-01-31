#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> vec[101];
bool visit[101];

bool bfs(int node, int target)
{
    queue<int> q;
    visit[node] = true;
    q.push(node);

    while(!q.empty())
    {
        int crt = q.front();
        q.pop();
        for (int i = 0; i < vec[crt].size(); i++)
        {
            int c = vec[crt][i];
            if (c == target) return true;
            if (!visit[c])
            {
                visit[c] = true;
                q.push(c);
            }
        }
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, input;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> input;
            if (input) vec[i].push_back(j);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << bfs(i, j) << ' ';
            fill_n(visit, n + 1, false);
        }
        cout << '\n';
    }
}