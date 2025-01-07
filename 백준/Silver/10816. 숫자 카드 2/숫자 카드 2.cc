#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n;
    map<int, int> cards;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        cards[input]++;
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int input;
        cin >> input;
        cards[input]++;
        cout << --cards[input] << " ";
    }
}