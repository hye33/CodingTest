#include <iostream>
#include <queue>
using namespace std;

bool visited[100001];
int bfs(int start, int target)
{
    queue<pair<int, int>> q;
    q.push(make_pair(0, start));
    visited[start] = true;

    while (!q.empty())
    {
        int cur = q.front().second;
        int t = q.front().first + 1;
        q.pop();

        if (cur * 2 == target || cur + 1 == target || cur - 1 == target)
            return t;

        if (cur < 50001 && !visited[cur * 2])
        {
            q.push(make_pair(t, cur * 2));
            visited[cur * 2] = true;
        }
        if (cur > 0 && !visited[cur - 1])
        {
            q.push(make_pair(t, cur - 1));
            visited[cur - 1] = true;
        }
        if (cur < 100000 && !visited[cur + 1])
        {
            q.push(make_pair(t, cur + 1));
            visited[cur + 1] = true;
        } 
    }
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;
    cout << ((n == k) ? 0 : bfs(n, k));
}