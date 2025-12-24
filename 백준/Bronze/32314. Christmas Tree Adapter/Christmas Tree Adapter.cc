#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, w, v;
    cin >> a >> w >> v;
    cout << (a <= w / v ? 1 : 0);
}