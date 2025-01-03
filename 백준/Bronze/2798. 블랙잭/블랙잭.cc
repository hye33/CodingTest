#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, card;
    vector<int> cards;

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> card;
        cards.push_back(card);
    }

    int max = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == i) continue;
            for (int k = 0; k < n; k++)
            {
                if (k == i || k == j) continue;
                int sum = cards[i] + cards[j] + cards[k];
                if (sum <= m && sum >= max) max = sum;
            }
        }
    }

    cout << max;
}