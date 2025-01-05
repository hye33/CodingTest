#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<string, int> &a, pair<string, int> &b)
{
    if (a.first.length() == b.first.length())
        return a < b;
    else
        return a.first.length() < b.first.length();
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    string w;
    map<string, int> words;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> w;
        words[w]++;
    }

    vector<pair<string, int>> v(words.begin(), words.end());
    sort(v.begin(), v.end(), comp);

    for (auto res : v)
        cout << res.first << '\n';
}