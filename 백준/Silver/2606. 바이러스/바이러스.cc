#include <iostream>
#include <vector>
using namespace std;

vector<int> vec[101];
bool visit[101];

int dfs(int node)
{
    int cnt = 1;
    visit[node] = true;
    for (int i = 0; i < vec[node].size(); i++)
    {
        if (!visit[vec[node][i]])
            cnt += dfs(vec[node][i]);
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;
    while(k--)
    {
        int a, b;
        cin >> a >> b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }

    cout << dfs(1) - 1;
}