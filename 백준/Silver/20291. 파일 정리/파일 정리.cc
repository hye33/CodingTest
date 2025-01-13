#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    map<string, int> m;

    while(n--)
    {
        string str;
        cin >> str;
        m[str.substr(str.find('.') + 1)]++;
    }

    for (auto res : m)
    {
        cout << res.first << " " << res.second << '\n';
    }
}