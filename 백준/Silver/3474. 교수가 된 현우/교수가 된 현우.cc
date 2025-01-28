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
        int cnt = 0;
        for (int num = 5; num <= n; num *= 5)
            cnt += n / num;
        
        cout << cnt << '\n';
    }
}