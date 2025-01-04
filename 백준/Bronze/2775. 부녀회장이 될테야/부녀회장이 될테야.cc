#include <iostream>
#include <string>
using namespace std;

int people(int k, int n)
{
    if (k == 0) return n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += people(k - 1, i);
    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, k, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> k >> n;
        cout << people(k, n) << '\n';
    }
}