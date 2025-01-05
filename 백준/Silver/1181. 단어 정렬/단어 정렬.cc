#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(string &a, string &b)
{
    if (a.length() == b.length())
        return a < b;
    else
        return a.length() < b.length();
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    string w;
    vector<string> words;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> w;
        words.push_back(w);
    }

    sort(words.begin(), words.end(), comp);
    words.erase(unique(words.begin(), words.end()), words.end());

    for (auto res : words)
        cout << res << '\n';
}