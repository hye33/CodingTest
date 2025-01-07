#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        stack<char> ps;
        string str;
        cin >> str;
        for (int j = 0; j < str.length(); j++)
        {
            if (ps.empty()) 
            {
                ps.push(str[j]);
                continue;
            }
            if (str[j] == '(')
                ps.push(str[j]);
            else if (str[j] == ')' && ps.top() == '(')
                ps.pop();
            else
                break;
        }
        if (ps.empty()) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}