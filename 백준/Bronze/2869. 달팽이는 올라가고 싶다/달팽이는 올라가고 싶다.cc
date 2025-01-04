#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b, v, day = 1;
    cin >> a >> b >> v;

    day += (v - a) / (a - b);
    if ((v - a) % (a - b) != 0) day++;

    cout << day;
}