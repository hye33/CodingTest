#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

bool comp(pair<string, int> &a, pair<string, int> &b)
{
    if (a.second == b.second)
    {
        if (a.first.length() == b.first.length())
            return a.first < b.first;
        
        return a.first.length() > b.first.length();
    }
    return a.second > b.second;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    map<string, int> words;
    int n, m;
    string str;

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str.length() >= m)
            words[str]++;
    }

    vector<pair<string, int>> v(words.begin(), words.end());
    sort(v.begin(), v.end(), comp);

    for (auto w : v)
    {
        cout << w.first << '\n';
    }
}