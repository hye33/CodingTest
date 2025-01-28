#include <iostream>
using namespace std;

int arr[100001];
int ps[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n >> arr[0];
    ps[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        ps[i] = ps[i - 1] + arr[i];
    }

    long long sum = 0;
    for (int i = 0; i < n - 1; i++)
        sum += arr[i] * (ps[n - 1] - ps[i]);

    cout << sum;
}