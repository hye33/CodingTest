#include <iostream>
using namespace std;

long long gcd(long long a, long long b)
{
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n, a, b;
    cin >> n;
    while(n--)
    {
        cin >> a >> b;
        cout << (a * b) / (a > b ? gcd(a, b) : gcd(b, a)) << '\n';
    }
}
