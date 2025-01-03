#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    int room = 1;
    int count = 1;
    cin >> n;

    while (n > room)
    {
        room += 6 * (count);
        count++;
    }

    cout << count;
}