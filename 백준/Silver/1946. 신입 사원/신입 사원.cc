#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    int a, b;
    cin >> t;
    while (t--)
    {
        vector<pair<int, int>> v;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            v.push_back(make_pair(a, b));
        }
        sort(v.begin(), v.end());

        int count = 1;
        int m = v[0].second;
        for (int i = 1; i < n; i++)
        {
            if (v[i].second > m) continue;
            else
            {
                count++;
                m = v[i].second;
            }
        }
        cout << count << '\n';
    }
}