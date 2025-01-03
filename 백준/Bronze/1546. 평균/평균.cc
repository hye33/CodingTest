#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(int a, int b)
{
    return a > b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, s;
    vector<int> m;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        m.push_back(s);
    }

    sort(m.begin(), m.end());

    float sum = 0.0f;
    for (auto a : m)
    {
        sum += ((float)a) / m[n - 1] * 100;
    }

    cout << sum / n;
}