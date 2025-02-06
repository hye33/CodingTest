#include <iostream>
using namespace std;

int value[11];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> value[i];
    
    int cnt = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        cnt += k / value[i];
        k = k % value[i];
    }
    cout << cnt;
}