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
    stack<int> s;
    string res ="";

    int pnt = 1;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        while(input >= pnt)
        {
            res += "+\n";
            s.push(pnt++);
        }
        if (input != s.top())
        {
            cout << "NO";
            return 0;
        }
        s.pop();
        res += "-\n";
    }

    cout << res;
}