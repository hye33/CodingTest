#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);
    stack<int> s;
    vector<char> res;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int pnt = 1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] < pnt)
        {
            if (s.empty() || v[i] != s.top())
            {
                cout << "NO";
                return 0;
            }
            s.pop();
            res.push_back('-');
            continue;
        }
        while(v[i] > pnt)
        {
            res.push_back('+');
            s.push(pnt);
            pnt++;
        }
        res.push_back('+');
        res.push_back('-');
        pnt++;
    }

    for (auto r : res)
        cout << r << '\n';
}