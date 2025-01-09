#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int, int>& a, pair<int, int>& b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    vector<pair<int, int>> v;
    pair<int, int> input;
    cin >> n;
    while(n--)
    {
        cin >> input.first >> input.second;
        v.push_back(input);
    }
    sort(v.begin(), v.end(), comp);

    for (auto res : v)
        cout << res.first << " " << res.second << '\n';
}