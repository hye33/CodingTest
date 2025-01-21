#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    string input;
    cin >> t;
    while(t--)
    {
        map<string, int> m;
        cin >> n;
        while(n--)
        {
            cin >> input >> input;
            m[input]++;
        }
        int sum = 1;
        for (auto cloth : m)
            sum = sum * (cloth.second + 1);
        cout << --sum << '\n';
    }
}