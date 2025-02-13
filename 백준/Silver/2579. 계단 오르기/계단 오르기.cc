#include <iostream>
using namespace std;

int arr[301];
int dp[301];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, score;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    dp[1] = arr[1];
    dp[2] = arr[1] + arr[2];
    for (int i = 3; i <= n; i++)
        dp[i] = arr[i] + max(arr[i - 1] + dp[i - 3], dp[i - 2]);

    cout << dp[n];
}