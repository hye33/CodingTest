#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> timeTable;

bool cmp(pair<int, int>& a, pair<int, int>& b)
{
    if (a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        timeTable.push_back(make_pair(a, b));
    }
    sort(timeTable.begin(), timeTable.end(), cmp);

    int cur = 0;
    for (int i = 0; i < n; i++)
    {
        if (timeTable[i].first < cur) continue;
        cnt++;
        cur = timeTable[i].second;
    }

    cout << cnt;
}