#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if (n > 99)
            cout << ((n * n) % 1000 == n ? "YES" : "NO") << '\n';
        else if (n > 9)
            cout << ((n * n) % 100 == n ? "YES" : "NO") << '\n';
        else
            cout << ((n * n) % 10 == n ? "YES" : "NO") << '\n';
    }
}