#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, input, sum = 0;
    vector<int> v;
    cin >> n;
    if (n == 0)
    {
        cout << 0;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());
    int excp = floor(float(n) * 0.15 + 0.5);

    for (int i = excp; i < n - excp; i++)
    {
        sum += v[i];
    }

    int res = floor(float(sum) / (n - excp * 2) + 0.5);
    cout << res;
}