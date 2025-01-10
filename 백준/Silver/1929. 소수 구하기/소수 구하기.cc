#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int m, n;
    vector<pair<int, bool>> v;
    cin >> m >> n;

    for (int i = 0; i <= n; i++)
    {
        v.push_back(make_pair(i, true));
    }

    v[1].second = false;
    for (int i = 2; i <= n; i++)
    {
        if (!v[i].second) continue;
        int num = v[i].first;
        for (int target = num + num; target <= n; target += num)
        {
            v[target].second = false;
        }
    }

    for (int i = m; i <= n; i++)
    {
        if (v[i].second)
            cout << v[i].first << '\n';
    }
}