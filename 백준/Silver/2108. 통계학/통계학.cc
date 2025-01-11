#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool comp(pair<int, int>& a, pair<int, int>& b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> v;
    int n, input, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        sum += input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());

    vector<pair<int, int>> m;
    m.push_back(make_pair(v[0], 1));
    for (int i = 1; i < n; i++)
    {
        if (v[i] == v[i - 1])
        {
            m.back().second++;
        }
        else
            m.push_back(make_pair(v[i], 1));
    }
    sort(m.begin(), m.end(), comp);

    cout << floor(float(sum) / n + 0.5) << '\n';
    cout << v[n / 2] << '\n';
    if (m[0].second == m[1].second)
        cout << m[1].first << '\n';
    else
        cout << m[0].first << '\n';
    cout << (v.back() - v.front()) << '\n';
}