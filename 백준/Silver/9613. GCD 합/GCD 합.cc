#include <iostream>
using namespace std;

int arr[101];

int gcd(int a, int b)
{
    if (a % b == 0) return b;
    return gcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    cin >> t;
    while(t--)
    {
        long long sum = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                sum += (arr[i] > arr[j] ? gcd(arr[i], arr[j]) : gcd(arr[j], arr[i]));
            }
        }

        cout << sum << '\n';
    }
}