#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    string method;
    vector<int> stack;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> method;
        if (method == "push")
        {
            int a;
            cin >> a;
            stack.push_back(a);
        }
        else if (method == "pop")
        {
            if (stack.empty())
            {
                cout << "-1" << '\n';
                continue;
            }
            cout << stack[stack.size() - 1] << '\n';
            stack.erase(stack.begin() + stack.size() - 1);
        }
        else if (method == "size")
            cout << stack.size() << '\n';
        else if (method == "empty")
            cout << (stack.empty()) << '\n';
        else if (method == "top")
        {
            if (stack.empty())
            {
                cout << "-1" << '\n';
                continue;
            }
            cout << stack[stack.size() - 1] << '\n';
        }
    }
}