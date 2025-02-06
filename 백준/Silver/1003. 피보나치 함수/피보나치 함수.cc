#include <iostream>
using namespace std;

pair<int, int> sum[41];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    sum[0] = make_pair(1, 0);
    sum[1] = make_pair(0, 1);
    for (int i = 2; i <= 40; i++)
    {
        sum[i].first = sum[i - 2].first + sum[i - 1].first;
        sum[i].second = sum[i - 2].second + sum[i - 1].second;
    }

    int t, input;
    cin >> t;
    while(t--)
    {
        cin >> input;
        cout << sum[input].first << ' ' << sum[input].second << '\n';
    }
}