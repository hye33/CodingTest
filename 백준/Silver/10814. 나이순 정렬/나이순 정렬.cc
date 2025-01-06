#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<string, pair<int, int>> &a, pair<string, pair<int, int>> &b)
{
    if (a.second.first == b.second.first)
        return a.second.second < b.second.second;
    return a.second.first < b.second.first;
}

    int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<pair<string, pair<int, int>>> v;

    for (int i = 0; i < n; i++)
    {
        string name;
        int age;
        cin >> age >> name;
        v.push_back(make_pair(name, make_pair(age, i)));
    }

    sort(v.begin(), v.end(), comp);

    for (auto res : v)
        cout << res.second.first << " " << res.first << '\n';
}