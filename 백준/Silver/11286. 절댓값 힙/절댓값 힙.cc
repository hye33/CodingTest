#include <iostream>
#include <queue>
using namespace std;

struct comp
{
    bool operator()(pair<int, int> &a, pair<int, int> &b)
    {
        if (a.first == b.first)
            return a.second > b.second;
        return a.first > b.first;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, x;
    cin >> n;
    priority_queue<pair<int, int>, vector<pair<int, int>>, comp> q;
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
