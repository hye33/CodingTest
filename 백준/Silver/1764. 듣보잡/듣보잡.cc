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

    map<string, int> names;
    vector<string> res;
    int n, m;

    cin >> n >> m;
    for (int i = 0; i < n + m; i++)
    {
        string name;
        cin >> name;
        
        names[name]++;
        if (names[name] > 1)
            res.push_back(name);
    }

    sort(res.begin(), res.end());

    cout << res.size() << '\n';
    for(auto n : res)
        cout << n << '\n';
}