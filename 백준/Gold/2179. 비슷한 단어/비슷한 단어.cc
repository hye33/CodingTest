#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

pair<string, int> v[20001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    pair<string, int> res[2];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i;
    }

    sort(v, v + n);

    int maxSlm = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int count = 0;
            if (v[i] == v[j])
                continue;

            if (v[i].first.substr(0, maxSlm) != v[j].first.substr(0, maxSlm))
                break;

            int minLen = min(v[i].first.length(), v[j].first.length());
            for (int k = maxSlm; k < minLen; k++)
                if (v[i].first[k] == v[j].first[k])
                    count++;

            if (count > 0)
            {
                maxSlm += count;
                res[0] = v[i];
                res[1] = v[j];
            }
            else if (count == 0)
            {
                int comp1 = min(res[0].second, res[1].second);
                int comp2 = min(v[i].second, v[j].second);
                if (comp2 > comp1)
                    continue;
                else if (comp2 < comp1)
                {
                    res[0] = v[i];
                    res[1] = v[j];
                }
                comp1 = max(res[0].second, res[1].second);
                comp2 = max(v[i].second, v[j].second);
                if (comp2 < comp1)
                {
                    res[0] = v[i];
                    res[1] = v[j];
                }
            }
        }
    }

    if (res[0].second < res[1].second)
        cout << res[0].first << '\n' << res[1].first;
    else
        cout << res[1].first << '\n' << res[0].first;
}