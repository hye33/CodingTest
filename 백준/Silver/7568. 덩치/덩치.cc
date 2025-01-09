#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    int repeat = 1;
    vector<pair<int, int>> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        pair<int, int> p;
        cin >> p.first >> p.second;
        v.push_back(p);
    }

    for (int i = 0; i < n; i++)
    {
        int grade = 1;
        for (int j = 0; j < n; j++)
        {
            if (i == j) continue;
            if (v[i].first < v[j].first && v[i].second < v[j].second)
                grade++;
        }
        cout << grade << " ";
    }
}