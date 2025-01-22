#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string name;
    int cnt = 0;
    map<string, int> m;
    while (getline(cin, name))
    {
        cnt++;
        m[name]++;
    }

    cout << fixed;
    cout.precision(4);
    for (auto& res : m)
        cout << res.first << ' ' << res.second / (float)cnt * 100 << '\n';
    
}