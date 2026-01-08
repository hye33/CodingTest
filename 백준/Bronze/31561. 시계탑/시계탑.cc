#include <iostream>
using namespace std;

int arr[26];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    float n;
    cin >> n;
    cout << fixed;
    cout.precision(1);
    if (n <= 30)
        cout << (n / 2.0f);
    else
    {
        float t = (3.0f / 2.0f) * (n - 30.0f);
        cout << (t + 15);
    }
}