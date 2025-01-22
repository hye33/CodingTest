#include <iostream>
#include <queue>
using namespace std;

priority_queue<int, vector<int>, greater<int>> q;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, input;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> input;
        q.push(input);
    }

    for (int i = 0; i < n * (n - 1); i++)
    {
        cin >> input;
        if (q.top() < input)
        {
            q.pop();
            q.push(input);
        }
    }

    cout << q.top();
}