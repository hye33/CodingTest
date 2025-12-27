#include <iostream>
#include <cmath>
using namespace std;

int counting(int n, int r, int c)
{
    if (n == 1) return 0;
    int cnt = 0, cal = 0;
    if (r >= n / 2)
    {
        cal += 2;
        r -= (n / 2);
    }
    if (c >= n / 2)
    {
        cal += 1;
        c -= (n / 2);
    }

    cnt = cal * (n / 2) * (n / 2);
    return cnt + counting(n / 2, r, c);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, r, c;
    cin >> n >> r >> c;
    int answer = counting(pow(2, n), r, c);
    cout << answer;
}