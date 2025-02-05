#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
string arr[26];
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

int dfs(int x, int y)
{
    if (x < 0 || x >= n || y < 0 || y >= n || arr[x][y] == '0')
        return 0;

    arr[x][y] = '0';
    int cnt = 1;

    for (int i = 0; i < 4; i++)
        cnt += dfs(x + dx[i], y + dy[i]);

    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> v;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (arr[i][j] == '1')
                v.push_back(dfs(i, j));

    cout << v.size() << '\n';
    sort(v.begin(), v.end());
    for (auto& res : v)
        cout << res << '\n';
}