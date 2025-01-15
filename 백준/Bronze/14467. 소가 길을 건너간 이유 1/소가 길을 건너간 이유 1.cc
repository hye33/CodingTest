#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    pair<int, int> c[11];
    for (int i = 1; i < 11; i++)
    {
        c[i].first = -1;
        c[i].second = 0;
    }
    while(n--)
    {
        int num, p;
        cin >> num >> p;

        if (c[num].first == -1)
            c[num].first = p;
        else if (c[num].first != p)
        {
            c[num].first = p;
            c[num].second++;
        }
    }
    int sum = 0;
    for (auto& cow : c)
        sum += cow.second;

    cout << sum;
}