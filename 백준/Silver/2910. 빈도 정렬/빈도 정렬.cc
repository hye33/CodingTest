#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

map<int, pair<int, int>> m;

bool comp(pair<int, pair<int, int>>& a, pair<int, pair<int, int>>& b)
{
    if (a.second.first == b.second.first)
        return a.second.second < b.second.second;
    return a.second.first > b.second.first;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, c, input;
    cin >> n >> c;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        m[input].first++;
        if (m[input].first == 1) m[input].second = i;
    }

    vector<pair<int, pair<int, int>>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), comp);

    for (auto& num : v)
        for (int i = 0; i < num.second.first; i++)
            cout << num.first << ' ';
}