#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, count = 0;
    cin >> n;
    string str;
    while(n--)
    {
        stack<char> s;
        cin >> str;
        for (auto c : str)
        {
            if (s.empty() || s.top() != c)
                s.push(c);
            else
                s.pop();
        }
        if (s.empty()) count++;
    }
    cout << count;
}