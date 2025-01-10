#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    while (1)
    {
        string str;
        stack<char> s;
        getline(cin, str);
        if (str == ".")
            break;

        for (int i = 0; i < str.length(); i++)
        {
            char c = str[i];
            if (c == '(' || c == '[')
                s.push(c);
            else if (c == ')')
            {
                if (s.empty())
                {
                    s.push(c);
                    break;
                }
                if (s.top() == '(')
                    s.pop();
                else
                {
                    s.push(c);
                    break;
                }
            }
            else if (c == ']')
            {
                if (s.empty())
                {
                    s.push(c);
                    break;
                }
                if (s.top() == '[')
                    s.pop();
                else
                {
                    s.push(c);
                    break;
                }
            }
        }

        if (s.empty())
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }
}