#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    vector<string> names, res;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        names.push_back(name);
    }

    sort(names.begin(), names.end());

    for (int i = 0; i < m; i++)
    {
        string name;
        cin >> name;
        if (binary_search(names.begin(), names.end(), name))
            res.push_back(name);
    }

    sort(res.begin(), res.end());

    cout << res.size() << '\n';
    for (auto r : res)
        cout << r << '\n';
}