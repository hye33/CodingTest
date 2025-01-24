#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        while(n % i == 0)
        {
            cout << i << '\n';
            n = n / i;
        }
    }
}