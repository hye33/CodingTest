#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int m, n, k;
bool arr[101][101];
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

int dfs(int y, int x)
{
    if (x < 0 || x >= n || y < 0 || y >= m || arr[y][x] == 1)
        return 0;

    arr[y][x] = 1;
    int cnt = 1;

    for (int i = 0; i < 4; i++)
        cnt += dfs(y + dy[i], x + dx[i]);
    
    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> m >> n >> k;
    while(k--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for (int i = y1; i < y2; i++)
            for (int j = x1; j < x2; j++)
                arr[i][j] = 1;
    }

    vector<int> v;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (arr[i][j] == 0)
                v.push_back(dfs(i, j));

    cout << v.size() <<'\n';
    sort(v.begin(), v.end());
    for (auto& res : v)
        cout << res << ' ';
}