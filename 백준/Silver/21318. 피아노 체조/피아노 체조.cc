#include <iostream>
using namespace std;

int ps[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, q, input, past;
    cin >> n >> past;
    for (int i = 1; i < n; i++)
    {
        cin >> input;
        ps[i] = ps[i - 1] + (past > input);
        past = input;
    }
    ps[n] = ps[n - 1];

    cin >> q;
    while(q--)
    {
        int x, y;
        cin >> x >> y;
        cout << ps[y - 1] - ps[x - 1] << '\n';
    }
}