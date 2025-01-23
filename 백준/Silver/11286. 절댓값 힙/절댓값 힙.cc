#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, x;
    cin >> n;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    while(n--)
    {
        cin >> x;
        if (x == 0)
        {
            if (q.size() == 0) cout << 0 << '\n';
            else
            {
                cout << q.top().second << '\n';
                q.pop();
            }
        }
        else
            q.push(make_pair(abs(x), x));
    }
}
