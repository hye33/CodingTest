#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n, m, input;
    cin >> t;
    while (t--)
    {
        vector<pair<int, int>> v;
        int printCount = 1;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            cin >> input;
            v.push_back(make_pair(input, i));
        }
        while(!v.empty())
        {
            bool isDelay = false;
            for (int j = 0; j < v.size(); j++)
            {
                if (v[0].first < v[j].first)
                {
                    isDelay = true;
                    v.push_back(v[0]);
                    v.erase(v.begin());
                    break;
                }
            }
            if (!isDelay)
            {
                if (v[0].second == m)
                {
                    cout << printCount << '\n';
                    break;
                }
                printCount++;
                v.erase(v.begin());
            }
        }
    }
}