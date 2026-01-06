#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    float a, b, c, d, buf;
    cin >> a >> b >> c >> d;
    float maxValue = 0;
    int idx;
    for (int i = 0; i < 4; i++)
    {
        if ((a / c + b / d) > maxValue)
        {
            maxValue = a / c + b / d;
            idx = i;
        }
        buf = a; a = c; c = d; d = b; b = buf;
    }
    cout << idx;
}