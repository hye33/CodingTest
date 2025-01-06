#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(const pair<int, int>& a, const pair<int, int>& b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    pair<int, int> coord;
    vector<pair<int, int>> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> coord.first >> coord.second;
        v.push_back(coord);
    }
    sort(v.begin(), v.end(), comp);

    for (auto res : v)
        cout << res.first << " " << res.second << '\n';
}