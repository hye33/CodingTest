#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    queue<int> cards;
    for (int i = 1; i <= n; i++)
        cards.push(i);
    
    while (cards.size() > 2)
    {
        cards.pop();
        cards.push(cards.front());
        cards.pop();
    }
    cout << cards.back();
}