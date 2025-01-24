#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int a = n, cnt = 0;
    while(1)
    {
        a = (a % 10) * 10 + ((a / 10) + (a % 10)) % 10;
        cnt++;
        if (a == n) break;
    }

    cout << cnt;
}