#include <iostream>
using namespace std;

long long dp[101] = { 0, 1, 1, 1, 2, 2 };

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    cin >> t;
    for (int i = 6; i <= 100; i++)
        dp[i] = dp[i - 1] + dp[i - 5];
    
    while(t--)
    {
        cin >> n;
        cout << dp[n] << '\n';
    }
}