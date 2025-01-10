#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int k, num, sum = 0;
    stack<int> s;
    cin >> k;
    while (k--)
    {
        cin >> num;
        if (num == 0)
            s.pop();
        else
            s.push(num);
    }
    while (!s.empty())
    {
        sum += s.top();
        s.pop();
    }
    cout << sum;
}