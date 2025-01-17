#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int p, m;
    vector<vector<pair<string, int>>> v;
    cin >> p >> m;
    while (p--)
    {
        int level;
        string name;
        bool join = false;
        cin >> level >> name;
        for (auto& room : v)
        {
            if (room.size() == m) continue;
            if (level >= room[0].second - 10 && level <= room[0].second + 10)
            {
                room.push_back(make_pair(name, level));
                join = true;
                break;
            }
        }
        if (join) continue;
        vector<pair<string, int>> vec = {{name, level}};
        v.push_back(vec);
    }
    
    for (auto& room : v)
    {
        sort(room.begin(), room.end());
        cout << (room.size() == m ? "Started!" : "Waiting!") << '\n';
        for (auto& res : room)
            cout << res.second << ' ' << res.first << '\n';
    }
}