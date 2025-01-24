#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b, c, m;
    cin >> a >> b >> c >> m;

    int t = 24, work = 0, tired = 0;

    while(t--)
    {
        if (tired + a <= m)
        {
            tired += a;
            work += b;
        }
        else
            tired = max(0, tired - c);
    }

    cout << work;
}