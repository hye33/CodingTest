#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int m, p, l, e, r, s, n;
    while (cin >> m >> p >> l >> e >> r >> s >> n)
    {
        int egg = 0;
        while(n--)
        {
            egg = m * e;
            m = p / s;
            p = l / r;
            l = egg;
        }
        cout << m << '\n';
    }
}