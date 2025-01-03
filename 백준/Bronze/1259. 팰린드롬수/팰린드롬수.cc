#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string n;
    while (true)
    {
        bool isPal = true;
        cin >> n;
        if (n == "0")
            break;

        for (int i = 0; i < n.length() / 2; i++)
        {
            if (n[i] != n[n.length() - i - 1])
            {
                isPal = false;
                break;
            }
        }

        if (isPal)
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }
}