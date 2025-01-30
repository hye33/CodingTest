#include <iostream>
using namespace std;

int ps[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, input;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> input;
        ps[i] = ps[i - 1] + input;
    }
    
    int a, b;
    while(m--)
    {
        cin >> a >> b;
        cout << ps[b] - ps[a - 1] << '\n';
    }
}