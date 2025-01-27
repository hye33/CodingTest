#include <iostream>
using namespace std;

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
        for (long long i = max(a, b); i <= a * b; i += max(a, b))
        {
            if ((i % a == 0) && (i % b == 0))
            {
                cout << i << '\n';
                break;
            }
        }
    }
}
